import java.util.*;

public class AccessPoint extends NetworkDevice
{
	private String key;
	private ArrayList<Client> authorisedToUse =  new ArrayList<Client>();

	public AccessPoint(String name, String address)
	{
		super(name, address);
		System.out.print("Creating AccessPoint with address " + address + ". ");
	}

	//method which add client to the list of authoriced clients
	public void authorisedClientToUse(Client client)
	{
		//I don't want to have duplicates, so I check whether client is already in an authorisedToUse list
		if(!authorisedToUse.contains(client))
			authorisedToUse.add(client);
	}


	//method returns array list of clients which are authorised to use this access point
	public ArrayList<Client> listOfAuthorised()
	{
		return authorisedToUse;
	}

	//method say whether client is authorised to connect to the access point
	public boolean isAuthorised(Client client)
	{
		for(int i = 0; i < authorisedToUse.size(); i++)
			if(authorisedToUse.get(i) == client)
				return true;
		return false;
	}

	public String toString()
	{
		return "AccessPoint@"+this.getAddress();
	}
}