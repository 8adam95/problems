import java.util.*;

public class Network
{
	private String name;
	private ArrayList<Channel> channelsInNetwork = new ArrayList<Channel>();
	private HashMap<Channel, ArrayList<NetworkDevice>> devicesInChannel = new HashMap<Channel, ArrayList<NetworkDevice>>();

	public Network(String aName)
	{
		this.name = aName;
	}


	public void addDeviceToNetwork(NetworkDevice networkDevice, Channel channel)
	{
		ArrayList<NetworkDevice> networkDevicesInChannel = new ArrayList<NetworkDevice>();


		//I change channel of the device to be the same as channel to which I added this device
		//if not, there would be a possibility to have a device with channel1 in channel 2 
		networkDevice.joinAChannel(channel);	

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