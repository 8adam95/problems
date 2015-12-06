import java.util.*;

public class NetworkDevice
{
	private String name;
	private String address;
	private String key;
	private ArrayList<AccessPoint> history = new ArrayList<AccessPoint>();

	public NetworkDevice(String aName, String address)
	{
		this.name = aName;
		this.address = address;
	}


	//method which returns address of a network device
	public String getAddress()
	{
		return address;
	}

	//method which set a key for a device
	public void setKey(String key)
	{
		this.key = key;
		System.out.println("Stored key: " + key);
	}

	//method which return a value of a key
	public String getKey()
	{
		return key;
	}

	public String toString()
	{
		return name + " " + address;
	}	
}
