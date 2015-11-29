public class Packet
{
	private String destinationAddress;
	private String sourceAddress;
	
	public Packet(String destination, String source)
	{
		this.destinationAddress = destination;
		this.sourceAddress = source;
	}

}