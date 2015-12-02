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


		//I change channel of the device to be the same as channel to which I added this device
		//if not, there would be a possibility to have a device with channel1 in channel 2 
		

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

	public ArrayList<NetworkDevice> listOfDevicesInChannel(Channel channel)
	{
		if(devicesInChannel.containsKey(channel))
			return devicesInChannel.get(channel);
		ArrayList<NetworkDevice> bum = new ArrayList<NetworkDevice>();
		return bum;
	}


}