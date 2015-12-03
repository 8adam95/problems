import java.util.*;

public class Handshake
{
	private static int no = 1;
	private Channel channelOfAccessPoint;
	private Channel oldChannelOfClient;
	private String key;
	private Channel outOfRange = new Channel(-2);


	//constructor, in which I connect client and accessPoint
	//then I'm trying to make a handshake
	public Handshake(Network network, Client client, AccessPoint accessPoint, String key)
	{
		join(network, client, accessPoint, key);
		boolean succees = makeHandshake(network, client, accessPoint);

		//revoke connection
		if(!succees)
		{
			disconnect(network, client, accessPoint);
		}

	}


	//
	public boolean makeHandshake(Network network, Client client, AccessPoint accessPoint)
	{
		ArrayList<HandshakePacket> handshakePacketsInChannel = new ArrayList<HandshakePacket>();
		ArrayList<Packet> trafficInChannel = new ArrayList<Packet>();

		boolean sameKey = false;

		trafficInChannel = getChannelOfAccessPoint().trafficInChannel();

		for(int i = 0; i < trafficInChannel.size(); i++)
			if(trafficInChannel.get(i) instanceof HandshakePacket)
			{
				System.out.println(trafficInChannel.get(i));
				//handshakePacketsInChannel.add(trafficInChannel.get(i));
			}

	/*	for(int i = 0; i < handshakePacketsInChannel.size(); i++)
			if(handshakePacketsInChannel.get(i).getDestinationAddress() == accessPoint.getAddress())
			{
				//destination address is the same as the address of the accessPoint
				//now I need to compare keys of packet and accessPoint
				if(compareKeys(accessPoint, handshakePacketsInChannel.get(i)))
					sameKey = true;
			}

		
*/
		return sameKey;
	}


	public boolean compareKeys(NetworkDevice device, HandshakePacket handshakePacket)
	{
		return device.getKey() == handshakePacket.returnKey();
	}

	//function which add handshake Packet to the channel of accessPoint
	public void addHandshakePacket(Channel channel, HandshakePacket handshakePacket)
	{
		channel.addPacketToChannel(handshakePacket);
	}



	//initiate connection between client and accessPoint in the network
	//connect client to the same channel as accessPoint, 
	//add new handshake packet to the channel
	public void join(Network network, Client client, AccessPoint accessPoint, String key)
	{
		channelOfAccessPoint = network.inWhichChannel(accessPoint);

		//I need an old channel of the client to return if a hanshake doesn't succeed
		oldChannelOfClient = network.inWhichChannel(client);

		network.addDeviceToNetwork(client, channelOfAccessPoint);
		
		HandshakePacket handshakePacket = new HandshakePacket(accessPoint.getAddress(), client.getAddress(), key);

		addHandshakePacket(channelOfAccessPoint, handshakePacket);
	}


	/*public HandshakePacket createHandshakePacket(String destinationAddress, String sourceAddress, String key)
	{
		HandshakePacket handshakePacket1 = new HandshakePacket(destinationAddress, sourceAddress, key);
		return handshakePacket1;
	}*/


	//It's enough if I just change the channel of the client to another, such that client is in channel in which there is no accessPoint
	public void disconnect(Network network, Client client, AccessPoint accessPoint)
	{
		network.addDeviceToNetwork(client, outOfRange);
	}


	//return previous channel of the client
	public Channel getOldChannelOfClient()
	{
		return oldChannelOfClient;
	}

	//return channel in which is accessPoint
	public Channel getChannelOfAccessPoint()
	{
		return channelOfAccessPoint;
	}

}