import java.util.*;

public class Channel
{
	private int number;

	//traffic = record of the Packets currently in the channel
	private ArrayList<Packet> traffic = new ArrayList<Packet>();

	public Channel(int aNumber)
	{
		this.number = aNumber;
	}

	public String toString()
	{
		return "Channel: " + number;
	}

	public void clearr()
	{
		traffic.clear();
	}

	public void addPacketToChannel(Packet packet)
	{
		//I don't want to have duplicates in a traffic
		System.out.println(packet.packetAdded() + number + ": " + packet);
		traffic.add(packet);
	}

	public void removePacketFromChannel(Packet packet)
	{
		if(traffic.contains(packet))
			traffic.remove(packet);
	}

	public ArrayList<Packet> trafficInChannel()
	{
		return traffic;
	}

	public Packet packetToAccessPoint(AccessPoint accessPoint)
	{
		Packet out = new Packet("-1", "-1");

		for(int i = 0; i < traffic.size(); i++)
			if(traffic.get(i).getDestinationAddress().equals(accessPoint.getAddress()))
				return traffic.get(i);
		return out;
	}

}