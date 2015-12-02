public class HandshakePacket extends Packet
{
	private String key;

	public HandshakePacket(String destination, String source, String key)
	{
		super(destination, source);
		this.key = key;
	}



}