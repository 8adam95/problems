import java.util.*;

public class Client extends NetworkDevice
{
	private String address;
	private ArrayList<AccessPoint> connectedTo = new ArrayList<AccessPoint>();

	public Client(String address)
	{
		super(address);
	}

	String toString()
	{
		return "Client with address " + address + " is currently connected to " + connectedTo;
	}


}