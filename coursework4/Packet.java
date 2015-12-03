public class Packet
{
	protected String destinationAddress;
	protected String sourceAddress;
	
	public Packet(String destination, String source)
	{
		this.destinationAddress = destination;
		this.sourceAddress = source;
	}

	public String getDestinationAddress()
	{
		return destinationAddress;
	}

	public String getSourceAddress()
	{
		return sourceAddress;
	}

}