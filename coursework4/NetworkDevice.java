public class NetworkDevice
{
	private String name;
	private String address;
	private String key;

	public NetworkDevice(String aName, String address)
	{
		this.name = aName;
		this.address = address;
	}

	public String getAddress()
	{
		return address;
	}

	public void setKey(String key)
	{
		this.key = key;
		System.out.println("Stored key: " + key);
	}

	public String getKey()
	{
		return key;
	}

	public String toString()
	{
		return name + " " + address;
	}	
}
