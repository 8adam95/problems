import java.util.*;

public class Hacker
{
	private String name;
	private Client targetClient;
	private Network network;
	private String key;
	private AccessPoint targetAccessPoint;
	private ArrayList<Packet> allOfTraffic = new ArrayList<Packet>();
	private ArrayList<HandshakePacket> handshakePacketsInNetwork = new ArrayList<HandshakePacket>();
	private Client hClient;

	public Hacker(String name)
	{
		this.name = name;
	}

	//method which set target client and target access point of the hacker
	public void observe(Client client, AccessPoint accessPoint, Network networkC)
	{
		targetClient = client;
		targetAccessPoint = accessPoint;
		network = networkC;
	}


	//method which collects every packet in the network
	public void getAllTheTraffic()
	{

		//It's important to clear this list, otherwise it would contains packets which are no longer in the network
		allOfTraffic.clear();

		//copy list of channels
		ArrayList<Channel> channelsInNetwork = new ArrayList<Channel>();
		channelsInNetwork = network.listOfChannelsInNetwork();


		//for every channel copy packets which are inside this packet
		for(int i = 0; i < channelsInNetwork.size(); i++)
		{
			Channel channel = new Channel(-10);
			channel = channelsInNetwork.get(i);
			ArrayList<Packet> packetsInChannel = new ArrayList<Packet>();

			packetsInChannel = channel.trafficInChannel();

			//for every packet if it is a new packet add it to the list of packets
			for(int j = 0 ; j < packetsInChannel.size(); j++)
				if(!allOfTraffic.contains(packetsInChannel.get(j)))
					allOfTraffic.add(packetsInChannel.get(j));
		}
	}

	//method which select handshake packets from list of packets
	public void selectHandshakePackets()
	{
		handshakePacketsInNetwork.clear();

		ArrayList<Packet> packets = new ArrayList<Packet>();
		packets = this.returnAllTheTraffic();

		for(int i = 0; i < packets.size(); i++)
			if(packets.get(i) instanceof HandshakePacket)
				handshakePacketsInNetwork.add((HandshakePacket)packets.get(i));
	}

	//return list of handshake packets in network
	public ArrayList<HandshakePacket> returnHandshakePacketsInNetwork()
	{
		return handshakePacketsInNetwork;
	}


	//method which print list of every packets in the network
	public ArrayList<Packet> returnAllTheTraffic()
	{
		return allOfTraffic;
	}

	//I need to check if two handshake packets are in this network
	//first I check if there is a packet from a client to an accessPoint
	//then I check if there is a packet from an access point to a clitn
	public boolean checkHandshakePackets()
	{
		boolean firstPart = false;
		boolean secondPart = false;

		ArrayList<HandshakePacket> tmp = new ArrayList<HandshakePacket>();
		tmp = returnHandshakePacketsInNetwork();

		//from client to access point
		for(int i = 0; i < tmp.size(); i++)
			if(targetClient.getAddress().equals(tmp.get(i).getSourceAddress()) && targetAccessPoint.getAddress().equals(tmp.get(i).getDestinationAddress()))
			{
				firstPart = true;
				break;
			}

		//from access point to client
		for(int i = 0; i < tmp.size(); i++)
		{
			if(targetAccessPoint.getAddress().equals(tmp.get(i).getSourceAddress()) && targetClient.getAddress().equals(tmp.get(i).getDestinationAddress()))
			{
				secondPart = true;
				break;
			}
		}
		return firstPart && secondPart;
	}

	//method which allows Hacker get the handshake packet key
	public void getKey()
	{
		this.key = targetClient.getKey();
		System.out.println("Cracked handshake, password for " + targetAccessPoint + " is " + key + "!");
	}

	//creating handshake between new client of hacker and target access point with correct key
	public void createHandshake()
	{
		Client client = new Client("hacker", "a1:22:b3:cd:e4:56");
		hClient = client;

		//it's important to set a key for a new client
		hClient.setKey(key);

		Handshake hackerHandshake = new Handshake(network, hClient, targetAccessPoint, key);
	}
}