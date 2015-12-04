import java.util.*;

public class Client extends NetworkDevice
{
	private AccessPoint connectedTo;

	public Client(String name, String address)
	{
		super(name, address);
		System.out.print("Creating Client with address " + address + ". ");
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

	public String toString()
	{
		return "Client@"+this.getAddress();
	}

}