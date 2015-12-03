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



	public void addPacketToChannel(Packet packet)
	{
		traffic.add(packet);
	}

	public ArrayList<Packet> trafficInChannel()
	{
		return traffic;
	}

}