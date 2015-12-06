public class HandshakePacket extends Packet
{
	private String key;

	public HandshakePacket(String destination, String source, String key)
	{
		super(destination, source);
		this.key = key;
	}

	//method returning key of a Handshake Packet
	public String returnKey()
	{
		return key;
	}

	public String toString()
	{
		return "HandshakePacket (Source: " + sourceAddress + " Destination: " + destinationAddress + ")";
	}
}

