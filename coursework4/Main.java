public class Main{

	public static void main(String[] args)
	{
		System.out.println();

		Network network = new Network("Network");

		Channel channel = new Channel(1);
		Channel channel2 = new Channel(2);

		network.addChannelToNetwork(channel);
		network.addChannelToNetwork(channel2);


		AccessPoint router = new AccessPoint("router", "12:f9:37:d7:de:11");
		router.setKey("1234567");

		network.addDeviceToNetwork(router, channel);

		Client tel = new Client("phone1", "f7:88:g9:hi:j1:22");
		tel.setKey("1234567");

		Handshake handshake = new Handshake(network, tel, router, "1234567");		
		Packet packet1 = new Packet("f7:88:g9:hi:j1:22", "12:f9:37:d7:de:11");
		Packet packet2 = new Packet("12:f9:37:d7:de:11","f7:88:g9:hi:j1:22");

		int n = 5;

		network.clearChannels();

		while(n > 0)
		{
			n -= 1;
			network.networkActivity(channel, tel, tel.currentlyConnectedTo());
		}

		/*
		channel.addPacketToChannel(packet);

		Client tel2 = new Client("23phone1", "721:s33");
		tel2.setKey("12");

		Client tel23 = new Client("23phonasde1a", "721:1a3:343");
		tel23.setKey("1234567");

		Packet packet2 = new Packet("123", "34:123:234");
		
		channel2.addPacketToChannel(packet2);
		
		

		
		Handshake handshake2 = new Handshake(network, tel2, router, "1111");

		Handshake handshake3 = new Handshake(network, tel2, router, "123456");
		Handshake handshake4 = new Handshake(network, tel2, router, "1234567");

		Handshake handshake5 = new Handshake(network, tel23, router, "1112345234");
		Handshake handshake6 = new Handshake(network, tel23, router, "1234567");


		System.out.println("Traffic in channel = " + channel.trafficInChannel());
		System.out.println("Traffic in channel2 = " + channel2.trafficInChannel());


		//Authorised contains clients which do not necesserly passed 2 steps of a handshake 
		//to be in a authorised it's enough to passed first part of a handshake
		System.out.println("List of authorised = " + router.listOfAuthorised());


/*		System.out.println(tel.currentlyConnectedTo());
		System.out.println(tel2.currentlyConnectedTo());
		System.out.println(tel23.currentlyConnectedTo());
*/		

		/*System.out.println(network.goodPair(tel, router));
		System.out.println(network.goodPair(tel2, router));
		System.out.println(network.goodPair(tel23, router));
*/
		System.out.println();

	}		
}