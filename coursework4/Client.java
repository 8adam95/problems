import java.util.*;

public class Client extends NetworkDevice
{
	private AccessPoint connectedTo;

	public Client(String name, String address)
	{
		super(name, address);
	}

	//connecting client to an access point
	public void connectToAccessPoint(AccessPoint accessPoint)
	{
		connectedTo = accessPoint;
	}


	public AccessPoint currentlyConnectedTo()
	{
		return connectedTo;
	}


}