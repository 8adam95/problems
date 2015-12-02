public class Main{

	public static void main(String[] args)
	{

		Network network = new Network("first network");

		Channel channel = new Channel(1);
		Channel channel2 = new Channel(2);

		network.addChannelToNetwork(channel);
		network.addChannelToNetwork(channel2);

		AccessPoint router = new AccessPoint("router", "73:23:123a:23");
		Client tel = new Client("phone1", "723");
		Client tel2 = new Client("23phone1", "721233");
		Client tel23 = new Client("23phonasde1a", "72123:123:343");


		router.authorisedClientToUse(tel);
		router.authorisedClientToUse(tel2);
		router.authorisedClientToUse(tel23);

		tel.connectToAccessPoint(router);
		tel2.connectToAccessPoint(router);
		tel23.connectToAccessPoint(router);

		Packet packet = new Packet("723", "73:23:123a:23");

		channel.addPacketToChannel(packet);
		

		network.addDeviceToNetwork(router, channel);
		network.addDeviceToNetwork(tel, channel2);
		network.addDeviceToNetwork(tel2, channel);
		network.addDeviceToNetwork(tel23, channel2);

		System.out.println(network.listOfChannelsInNetwork());
		System.out.println(network.listOfDevicesInChannel(channel));
		System.out.println(network.listOfDevicesInChannel(channel2));


	}		
}