public class NetworkDevice
{
	private String address;
	private Channel curChannel;

	public NetworkDevice(String address)
	{
		this.address = address;
	}

	public Channel currentChannel()
	{
		return curChannel;
	}

	public void joinAChannel(Channel channel)
	{
		//removing device from old channel
		Channel oldChannel = currentChannel();
		oldChannel.removeDevice(); 	//tutaj trzeba coś wpisać między ()

		//adding device to a new channel
		channel.addDevice();		//tutaj to samo
		this.curChannel = channel;
	}
}