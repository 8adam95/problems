public Channel
{
	private int number;
	private ArrayList<Packet> traffic = new ArrayList<Packet>();
	private ArrayList<NetworkDevice> devicesInChannel = new ArrayList<NetworkDevice>();

	public Channel(int number)
	{
		this.number = number;
	}

	public void addDevice(String address)
	{
		devicesInChannel.add(address);
	}

	public void removeDevice(String address)
	{
		if(devicesInChannel.contains(address))
			devicesInChannel.remove(address);
	}

}