public class Packet
{
	private String destinationAddress;
	private String sourceAddress;
	
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