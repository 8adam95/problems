import java.util.*;

public class AccessPoint extends NetworkDevice
{
	private ArrayList<Client> authorisedToUse =  new ArrayList<Client>();

	public AccessPoint(String name, String address, Channel channel)
	{
		super(name, address, channel);
	}



	//method which add client to the list of authoriced clients
	public void authorisedClientToUse(Client client)
	{
		authorisedToUse.add(client);
	}

	public ArrayList<Client> listOfAuthorised()
	{
		return authorisedToUse;
	}
}