import java.util.*;

public class Handshake
{
	private Channel channelOfAccessPoint;
	private String key;
	private Channel outOfRange = new Channel(-2);

	//constructor, in which I temporary connect a client and an accessPoint
	//then I'm trying to make a handshake
	public Handshake(Network network, Client client, AccessPoint accessPoint, String key)
	{
		System.out.println("Handshaking " + client + " " + accessPoint);
		join(network, client, accessPoint, key);
		boolean successToAccess = makeHandshakeToAccessPoint(network, client, accessPoint);
		boolean successToClient = makeHandshakeToClient(network, client, accessPoint);

		//revoke connection
		if(!successToClient || !successToAccess)
			disconnect(network, client, accessPoint);

		//there were two handshake packets: first from a client to an access point and second from an access point to a client
		else
		{
			System.out.println("Handshake success " + client + " connects to " + accessPoint);
			client.addToHistory(accessPoint);
			client.connectToAccessPoint(accessPoint);
		}
	}

	//initiate connection between client and accessPoint in the network
	//connect client to the same channel as accessPoint, 
	//add new handshake packet to the channel
	public void join(Network network, Client client, AccessPoint accessPoint, String key)
	{
		this.key = key;
		channelOfAccessPoint = getChannelOfAccessPoint(network, accessPoint);

		network.addDeviceToNetwork(client, channelOfAccessPoint);
		
		HandshakePacket handshakePacket = new HandshakePacket(accessPoint.getAddress(), client.getAddress(), key);
		addHandshakePacket(channelOfAccessPoint, handshakePacket);
	}


	//making handshake with an accessPoint
	public boolean makeHandshakeToAccessPoint(Network network, Client client, AccessPoint accessPoint)
	{
		ArrayList<HandshakePacket> handshakePacketsInChannel = new ArrayList<HandshakePacket>();
		ArrayList<Packet> arrayTrafficInChannel = new ArrayList<Packet>();


		//arrayTrafficInChannel contains traffic from a channel in which is an access point 
		arrayTrafficInChannel = getChannelOfAccessPoint(network, accessPoint).trafficInChannel();

		//firstly I consider every HandshakePacket in this channel
		for(int i = 0; i < arrayTrafficInChannel.size(); i++)
			if(arrayTrafficInChannel.get(i) instanceof HandshakePacket)
				handshakePacketsInChannel.add((HandshakePacket)arrayTrafficInChannel.get(i));

		//then I check whether destination address is equal address of the accessPoint
		for(int i = 0; i < handshakePacketsInChannel.size(); i++)
			if(handshakePacketsInChannel.get(i).getDestinationAddress().equals(accessPoint.getAddress()))
				//destination address is the same as the address of the accessPoint
				//now I need to compare keys of packet and accessPoint
				if(compareKeys(accessPoint, handshakePacketsInChannel.get(i)))
				{
					//then client is authorised to connect with this access point
					accessPoint.authorisedClientToUse(client);
			
					//i get rid of used packet
					getChannelOfAccessPoint(network, accessPoint).removePacketFromChannel(handshakePacketsInChannel.get(i));

					//create new packet to client from access point
					HandshakePacket hPacket = new HandshakePacket(client.getAddress(), accessPoint.getAddress(), key);

					//and then send this packet into a chennel of an access point
					addHandshakePacket(getChannelOfAccessPoint(network, accessPoint), hPacket);

					return true;
				}
		return false;
	}

	//making handshake with client
	//this method is almost the same as a making a handshake with an access point
	public boolean makeHandshakeToClient(Network network, Client client, AccessPoint accessPoint)
	{
		ArrayList<HandshakePacket> handshakePacketsInChannel = new ArrayList<HandshakePacket>();
		ArrayList<Packet> arrayTrafficInChannel = new ArrayList<Packet>();
		boolean suc = false;

		arrayTrafficInChannel = getChannelOfAccessPoint(network, accessPoint).trafficInChannel();

		for(int i = 0; i < arrayTrafficInChannel.size(); i++)
			if(arrayTrafficInChannel.get(i) instanceof HandshakePacket)
				handshakePacketsInChannel.add((HandshakePacket)arrayTrafficInChannel.get(i));

		for(int i = 0; i < handshakePacketsInChannel.size(); i++)
			if(handshakePacketsInChannel.get(i).getDestinationAddress() == client.getAddress())
				if(compareKeys(client, handshakePacketsInChannel.get(i)))
				{
					getChannelOfAccessPoint(network, accessPoint).removePacketFromChannel(handshakePacketsInChannel.get(i));
					return true;
				}

		return false;
	}


	//this method compare a key of a device with a key of a handshake packet
	//if equal it return true otherwise false
	public boolean compareKeys(NetworkDevice device, HandshakePacket handshakePacket)
	{
		return device.getKey().equals(handshakePacket.returnKey());
	}

	//function which add handshake Packet to the channel of accessPoint
	public void addHandshakePacket(Channel channel, HandshakePacket handshakePacket)
	{
		channel.addPacketToChannel(handshakePacket);
	}

	//function almost the same as add handshake packet, but this time I don't want to publish statement about added handshake packets
	//otherwise program would show twice the same packets
	public void addHandshakePacket(Channel channel, HandshakePacket handshakePacket, String a)
	{
		channel.addPacketToChannel2(handshakePacket);
	}


	//It's enough if I just change the channel of the client to another, such that client is in channel in which there is no accessPoint
	public void disconnect(Network network, Client client, AccessPoint accessPoint)
	{
		network.addDeviceToNetwork(client, outOfRange);
	}

	//method which connect client with previously connected access point
	public void reconnection(Network network, Client client, AccessPoint accessPoint)
	{
		HandshakePacket handshakePacket1 = new HandshakePacket(accessPoint.getAddress(), client.getAddress(), key);
		HandshakePacket handshakePacket2 = new HandshakePacket(client.getAddress(), accessPoint.getAddress(), key);

		channelOfAccessPoint = getChannelOfAccessPoint(network, accessPoint);
		network.addDeviceToNetwork(client, channelOfAccessPoint);

		addHandshakePacket(channelOfAccessPoint, handshakePacket1, "1");
		addHandshakePacket(channelOfAccessPoint, handshakePacket2, "1");
	}

	//return channel in which is accessPoint
	public Channel getChannelOfAccessPoint(Network network, AccessPoint accessPoint)
	{
		return network.inWhichChannel(accessPoint);
	}

}