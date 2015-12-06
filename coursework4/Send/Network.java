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


	//method which return channel in which is network device
	//if a network device is not in any channel it returns 
	//specially created channel "outOfScope"
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

	//method which add a device to a network
	//it's important to first remove this device from a previous channel
	//because the device can be only in one channel
	public void addDeviceToNetwork(NetworkDevice networkDevice, Channel channel)
	{
		//removing device from a previous channel
		removeDeviceFromChannel(networkDevice);

		ArrayList<NetworkDevice> networkDevicesInChannel = new ArrayList<NetworkDevice>();

		//For security I check whether a channel is in a list
		//otherwise we could add a device to a channel which do not exist in a network
		addChannelToNetwork(channel);

		//get the all devices in a channel
		if(devicesInChannel.containsKey(channel))
			networkDevicesInChannel = devicesInChannel.get(channel);

		//add a new device to list of already existing devices in this channel
		networkDevicesInChannel.add(networkDevice);

		//and return a updated list of devices to the channel
		devicesInChannel.put(channel, networkDevicesInChannel);
	}


	//method add channel to a network
	public void addChannelToNetwork(Channel channel)
	{
		//I don't want to have duplicates in an arraylist, so I add 
		//a channel only if it's not in a channelsInNetwork
		if(!channelsInNetwork.contains(channel))
			channelsInNetwork.add(channel);
	}

	//method which return existing channels in a network
	public ArrayList<Channel> listOfChannelsInNetwork()
	{
		return channelsInNetwork;
	}

	//method which clears all the channels
	//it call another clearing method for every channel
	public void clearChannels()
	{
		for(int i = 0; i < listOfChannelsInNetwork().size(); i++)
			channelsInNetwork.get(i).clearr();
	}

	//method return list of devices in the channel
	//if there is no devices return empty list 
	public ArrayList<NetworkDevice> listOfDevicesInChannel(Channel channel)
	{
		if(devicesInChannel.containsKey(channel))
			return devicesInChannel.get(channel);
		ArrayList<NetworkDevice> bum = new ArrayList<NetworkDevice>();
		return bum;
	}

	//method which provide sending packets between the client and the access point in the network
	public void networkActivity(Channel channel, Client client, AccessPoint accessPoint, Network network)
	{
		System.out.println("Activity burst:");



		//packets can be send only if the client is connected to the access point and the client
		//is authorised to use this access point
		//I need to check if the access point is different from null, because I call this method with a 
		//parameter which may be a null
		if(accessPoint != null && client.currentlyConnectedTo() == accessPoint && accessPoint.isAuthorised(client))
		{
			//I check whether client will communicate or disconnect
			boolean communicate = client.ableToCommunicate();

			if(communicate)
			{
				//creating new packet from an access point to the client and adding it to the appropriate channel
				Packet packet = new Packet(accessPoint.getAddress(), client.getAddress());
				channel.addPacketToChannel(packet);

				//Get the packet from the channel with the destination address equals address of the accessPoint
				//if there is no, it returns packet with values (-1, -1)
				Packet toAccess = channel.packetToAccessPoint(accessPoint);


				//if found 
				if(toAccess.getDestinationAddress().equals(accessPoint.getAddress()))
				{
					//if a client is authorised to use this access point
					//the same once again
					if(accessPoint.isAuthorised(client))
					{
						//returning packet is added only if every condition is met
						Packet packet2 = new Packet(toAccess.getSourceAddress(), accessPoint.getAddress());
						channel.addPacketToChannel(packet2);
					}
				}
			}

			//it's the case that client is disconnected
			//make a handshake between a client and previous access point with which this client was connected to
			else
			{
				System.out.println(client + " disconnects from access point");

				//get history of access points
				ArrayList<AccessPoint> history = new ArrayList<AccessPoint>();
				history = client.getHistoryOfAccessPoints();

				//if client was previously connected to some access point ??? it's not true in the log2.txt
				//connect them by a handshake
				if(history.size() >= 1)
				{
					//I create a new handshake between client and access point with which client was previously connected to
					Handshake handshake = new Handshake(network, client, history.get(history.size()-1), client.getKey());	

					//I need to add handshake packets to the new channel
					//because when a connection succeed handshake packets which were used are removed
					handshake.reconnection(network, client, history.get(history.size()-1));
				}
				//return info statement
				else
					System.out.println("It was first connection with an access point of this client!");

			}
		}
		//if the client is not connected to the access point or is not authorised
		//print a info statement
		else
		{
			System.out.println("Client not authorised or client not connected!");
		}
		

		//stop a program for 100ms
		goToSleep(100);
	}


	//method which stops a program for a n miliseconds
	public void goToSleep(int n)
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

	//method which return hash for a key
	public String hashFunction(String key)
	{
		int value = 1;
		int pot = 37;
		for(int i = 0; i < key.length(); i++)
		{
			char c = key.charAt(i);
			value = value*pot + c;
		}
		//I need to cast a int into a String
		String a = "";
		a += value;
		return a;
	}

}