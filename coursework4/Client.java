import java.util.*;

public class Client extends NetworkDevice
{
	private AccessPoint connectedTo;
	private ArrayList<AccessPoint> historyOfConnections = new ArrayList<AccessPoint>();

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

	//method which allows to add access point into an array containing all of the previous access points connected with this client
	public void addToHistory(AccessPoint accessPoint)
	{
		historyOfConnections.add(accessPoint);
	}

	//this method say if in this caase client disconnect rather than communicate 
	//it has 10% of beeing disconnected

	//so it's the same as probability of choosing 1 number from 10 numbers
	public boolean ableToCommunicate()
	{
		Random randomGenerator = new Random();
		int randomValue = randomGenerator.nextInt(10);

		if(randomValue < 1)
			return false;
		return true;

	}

	//method which returns arraylist of access points with which client was connected
	public ArrayList<AccessPoint> getHistoryOfAccessPoints()
	{
		return historyOfConnections;
	}


	//method which returns an access point to which the client is connected to
	public AccessPoint currentlyConnectedTo()
	{
		return connectedTo;
	}

	public String toString()
	{
		return "Client@"+this.getAddress();
	}

}