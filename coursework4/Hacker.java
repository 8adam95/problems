public class Hacker
{
	private String name;
	private Client targetClient;
	private AccessPoint accessPoint;

	public Hacker(String name)
	{
		this.name = name;
	}

	public void setTargetClient(Client client)
	{
		targetClient = client;
	}

	public void setTargetAccessPoint(AccessPoint accessPoint)
	{
		targetAccessPoint = accessPoint;
	}


}