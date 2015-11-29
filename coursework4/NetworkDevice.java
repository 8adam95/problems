public class NetworkDevice
{
	private String address;
	private Channel curChannel;

	public NetworkDevice(String address)
	{
		this.address = address;
		this.curChannel = -1;
	}

	public Channel currentChannel()
	{
		return curChannel;
	}

	public void joinAChannel(Channel channel)
	{
		//removing device from old channel
		Channel oldChannel = currentChannel();

		//I check whether it's in some channel or not
		oldChannel.removeDevice(address);

		//adding device to a new channel
		channel.addDevice(address);		
		this.curChannel = channel;
	}
}