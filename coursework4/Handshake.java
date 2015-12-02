import java.util.*;

public class Handshake
{

	public Channel initiateJoin(Network network, Client client, AccessPoint accessPoint)
	{
		Channel channelOfAccessPoint = network.inWhichChannel(accessPoint);

		//I need an old channel of the client to return if a hanshake doesn't succeed
		Channel oldChannelOfClient = network.inWhichChannel(client);

		network.addDeviceToNetwork(client, channelOfAccessPoint);

		return channelOfAccessPoint;
	}

	public void addHandshakePacket(Network network, Channel channel, Client client, AccessPoint accessPoint, HandshakePacket handshakePacket)
	{
		channel.addPacket(handshakePacket);
	}


	public void join(Network network, Client client, AccessPoint accessPoint)
	{
		Channel needed = initiateJoin(network, client, accessPoint);
		
		String key = "1234567";

		HandshakePacket handshakePacket = new HandshakePacket(accessPoint.getAddress(), client.getAddress(), key);

		addHanshakePacket(network, needed, client, accessPoint, handshakePacket);
	}


}