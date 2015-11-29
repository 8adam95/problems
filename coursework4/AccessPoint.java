import java.util.*;

public class AccessPoint extends NetworkDevice
{
	private String address;
	private ArrayList<Client> authorisedToUse =  new ArrayList<Client>();

	public AccessPoint(String address)
	{
		super(address);
	}


	public String toString()
	{
		return "AccessPoint of address " + address + " can be accessed by " + authorisedToUse;
	}
}