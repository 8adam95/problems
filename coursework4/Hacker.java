import java.util.*;

public class Hacker
{
	private String name;
	private Client targetClient;
	private AccessPoint targetAccessPoint;
	private ArrayList<Packet> allOfTraffic = new ArrayList<Packet>();

	public Hacker(String name)
	{
		this.name = name;
	}

	//method which set target client and target access point of the hacker
	public void observe(Client client, AccessPoint accessPoint)
	{
		targetClient = client;
		targetAccessPoint = accessPoint;
	}


	//method which collects every packet in the network
	public void getAllTheTraffic(Network network)
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


	//method which print list of every packets in the network
	public ArrayList<Packet> returnAllTheTraffic(Network network)
	{
		return allOfTraffic;
	}
}