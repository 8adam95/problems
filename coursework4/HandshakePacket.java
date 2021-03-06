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

	public String returnHash()
	{
		int value = 1;
		int pot = 37;
		for(int i = 0; i < key.length(); i++)
		{
			char c = key.charAt(i);
			value = value*pot + c;
		}
		//I need to cast a int into a String
		String a = "";
		a += value;
		return a;
	}

	
	public String toString()
	{
		return "HandshakePacket (Source: " + sourceAddress + " Destination: " + destinationAddress + ")";
	}
}

