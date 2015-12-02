public class NetworkDevice
{
	private String name;
	private String address;
	private Channel curChannel;

	//Channel firstUse = new Channel(-1);

	public NetworkDevice(String aName, String address, Channel channel)
	{
		this.name = aName;
		this.address = address;
		this.curChannel = channel;
	}

//	public NetworkDevice(String aName, String address, Channel channel)
//	{
//		this.name = aName;
//		this.address = address;
//		this.curChannel = channel;
//	}

	public Channel currentChannel()
	{
		return curChannel;
	}

	public String toString()
	{
		return name + " " + address + " " + curChannel;
	}

	//I give Network device a new channel instead of old one
	public void joinAChannel(Channel channel)
	{
		curChannel = channel;
	}
	
}//Hano
