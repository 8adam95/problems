public class NetworkDevice
{
	private String name;
	private String address;

	public NetworkDevice(String aName, String address)
	{
		this.name = aName;
		this.address = address;
	}

	public String toString()
	{
		return name + " " + address;
	}	
}
