public class Packet
{
	protected String destinationAddress;
	protected String sourceAddress;
	
	public Packet(String destination, String source)
	{
		this.destinationAddress = destination;
		this.sourceAddress = source;
	}


	//return destination address of the packet
	public String getDestinationAddress()
	{
		return destinationAddress;
	}

	//return source address of the packet
	public String getSourceAddress()
	{
		return sourceAddress;
	}

	public String toString()
	{
		return "Packet (Source: " + sourceAddress + " Destination: " + destinationAddress + ")";
	}

	public String packetAdded()
	{
		return "Packet added to channel ";
	}
}