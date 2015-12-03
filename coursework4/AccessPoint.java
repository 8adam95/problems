import java.util.*;

public class AccessPoint extends NetworkDevice
{
	private String key;
	private ArrayList<Client> authorisedToUse =  new ArrayList<Client>();

	public AccessPoint(String name, String address)
	{
		super(name, address);
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