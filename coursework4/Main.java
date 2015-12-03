public class Main{

	public static void main(String[] args)
	{

		System.out.println("***************************************");
		System.out.println("***************************************");

		Network network = new Network("first network");

		Channel channel = new Channel(1);
		Channel channel2 = new Channel(2);

		network.addChannelToNetwork(channel);
		network.addChannelToNetwork(channel2);

		AccessPoint router = new AccessPoint("router", "73:23:123a:23");
		Client tel = new Client("phone1", "723");
		Client tel2 = new Client("23phone1", "721233");
		Client tel23 = new Client("23phonasde1a", "72123:123:343");


		router.setKey("1234567");
		tel.setKey("1234567");
		tel2.setKey("12");
		tel23.setKey("09534");

		router.authorisedClientToUse(tel);
		router.authorisedClientToUse(tel2);
		router.authorisedClientToUse(tel23);

		tel.connectToAccessPoint(router);
		tel2.connectToAccessPoint(router);
		tel23.connectToAccessPoint(router);

		Packet packet = new Packet("723", "73:23:123a:23");
		Packet packet2 = new Packet("123", "3453:123:234");
		channel.addPacketToChannel(packet);
		channel2.addPacketToChannel(packet2);
		

		network.addDeviceToNetwork(router, channel);
		network.addDeviceToNetwork(tel, channel2);
		network.addDeviceToNetwork(tel2, channel);
		network.addDeviceToNetwork(tel23, channel2);

		System.out.println("In which channel is tel = " + network.inWhichChannel(tel));
		System.out.println("In which channel is tel2 ="  + network.inWhichChannel(tel2));

		System.out.println("------------------------------------------------------------------------------");

		System.out.println("List of Channels in Network = " + network.listOfChannelsInNetwork());
		System.out.println("***************************************");
		System.out.println("List of devices in channel = " + network.listOfDevicesInChannel(channel));
		System.out.println("List of devices in channel2 = " + network.listOfDevicesInChannel(channel2));

		System.out.println("------------------------------------------------------------------------------");
		System.out.println("------------------------------------------------------------------------------");

		Handshake handshake = new Handshake(network, tel, router, "1234567");
		Handshake handshake2 = new Handshake(network, tel, router, "1111");

		System.out.println("Traffic in channel = " + channel.trafficInChannel());
		System.out.println("Traffic in channel2 = " + channel2.trafficInChannel());

	}		
}