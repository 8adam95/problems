import java.util.*;

public class Network
{
	private String name;
	private ArrayList<Channel> channelsInNetwork = new ArrayList<Channel>();
	private HashMap<Channel, ArrayList<NetworkDevice>> devicesInChannel = new HashMap<Channel, ArrayList<NetworkDevice>>();

	Channel outOfScope = new Channel(-1);

	public Network(String aName)
	{
		this.name = aName;
	}


	public Channel inWhichChannel(NetworkDevice networkDevice)
	{
		for(Channel key : devicesInChannel.keySet())
		{
			ArrayList<NetworkDevice> tempArray = new ArrayList<NetworkDevice>();
			tempArray = devicesInChannel.get(key);

			for(int i = 0; i < tempArray.size(); i++)
				if(tempArray.get(i) == networkDevice)
					return key;
		}

		return outOfScope;
	}

	//firstly I remove device from a previous channel
	public void removeDeviceFromChannel(NetworkDevice networkDevice)
	{
		Channel c = inWhichChannel(networkDevice);

		if(c != outOfScope)
		{
			ArrayList<NetworkDevice> tempArray = new ArrayList<NetworkDevice>();
			tempArray = devicesInChannel.get(c);
			for(int i = 0; i < tempArray.size(); i++)
				if(tempArray.get(i) == networkDevice)
				{
					tempArray.remove(i);
					break;
				}	
			devicesInChannel.put(c, tempArray);
		}
	}

	
	public void addDeviceToNetwork(NetworkDevice networkDevice, Channel channel)
	{
		removeDeviceFromChannel(networkDevice);
		ArrayList<NetworkDevice> networkDevicesInChannel = new ArrayList<NetworkDevice>();

		//For security I check whether a channel is in a list
		addChannelToNetwork(channel);

		if(devicesInChannel.containsKey(channel))
			networkDevicesInChannel = devicesInChannel.get(channel);

		networkDevicesInChannel.add(networkDevice);

		devicesInChannel.put(channel, networkDevicesInChannel);
	}

	public void addChannelToNetwork(Channel channel)
	{
		//I don't want to have duplicates in an arraylist, so I add 
		//a channel only if it's not in a channelsInNetwork
		if(!channelsInNetwork.contains(channel))
			channelsInNetwork.add(channel);
	}

	public ArrayList<Channel> listOfChannelsInNetwork()
	{
		return channelsInNetwork;
	}

	public void clearChannels()
	{
		for(int i = 0; i < channelsInNetwork.size(); i++)
			channelsInNetwork.get(i).clearr();
	}

	public ArrayList<NetworkDevice> listOfDevicesInChannel(Channel channel)
	{
		if(devicesInChannel.containsKey(channel))
			return devicesInChannel.get(channel);
		ArrayList<NetworkDevice> bum = new ArrayList<NetworkDevice>();
		return bum;
	}

	//
	public void networkActivity(Channel channel, Client client, AccessPoint accessPoint)
	{
		System.out.println("Activity burst:");

		if(accessPoint != null && accessPoint.isAuthorised(client))
		{
			Packet packet = new Packet(accessPoint.getAddress() ,client.getAddress());
			channel.addPacketToChannel(packet);

			//Get the packet with destination address equals address of the accessPoint
			//it there is no, it returns packet with values (-1, -1)
			Packet toAccess = channel.packetToAccessPoint(accessPoint);
			if(toAccess.getDestinationAddress().equals(accessPoint.getAddress()))
			{
				//if a client is authorised to use this access point
				if(accessPoint.isAuthorised(client))
				{
					//returning packet is added only if every condition is met
					Packet packet2 = new Packet(toAccess.getSourceAddress(), accessPoint.getAddress());
					channel.addPacketToChannel(packet2);
				}
			}
		}
		
		goSleep(100);
	}

	public void goSleep(int n)
	{
		try
		{
			Thread.sleep(n);
		}
		catch (InterruptedException e)
		{
			System.out.println(e);
		}
	}

	//this method check conditions which are neccessary to send packets
	//between client and access Point
	//client must be connected to the accessPoint and client must be authorised to send packet to the accessPoint
	public boolean goodPair(Client client, AccessPoint accessPoint)
	{
		return client.currentlyConnectedTo() == accessPoint && accessPoint.isAuthorised(client);
	}

}