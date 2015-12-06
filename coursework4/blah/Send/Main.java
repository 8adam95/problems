import java.util.*;
import java.io.File;
import java.io.FileNotFoundException;

public class Main{

	public static void main(String[] args)
	{
		System.out.println();


		//firstly I need to create a network
		Network network = new Network("Network");


		//reading file keys.txt
		//and for every key running hashFunction
		try
		{
			Scanner input = new Scanner(System.in);
			File file = new File("keys.txt");

			input = new Scanner(file);

			while(input.hasNextLine())
			{
				String line = input.nextLine();
				System.out.println(network.hashFunction(line));
			}
			input.close();
		}
		catch(Exception e)
		{
			System.out.println("Error while reading file line by line:" + e.getMessage());
        } 



		//then I can create channels and add them to created network
		Channel channel = new Channel(1);
		Channel channel2 = new Channel(2);

		network.addChannelToNetwork(channel);
		network.addChannelToNetwork(channel2);


		//create acceess point with name and address.
		//Then I am able to set key to this device and finally add it to the network in some channel
		AccessPoint router = new AccessPoint("router", "12:f9:37:d7:de:11");
		router.setKey("1234567");

		network.addDeviceToNetwork(router, channel);


		//it's the same as with an access point, but as a client and without adding it to the channel (I need to pass a hanshake procedure) 
		Client tel = new Client("phone1", "f7:88:g9:hi:j1:22");
		tel.setKey("1234567");


		//making a handshake
		//Hanshake is a class which create an object of type HandshakePacket
		Handshake handshake = new Handshake(network, tel, router, "1234567");		
		Packet packet1 = new Packet("f7:88:g9:hi:j1:22", "12:f9:37:d7:de:11");
		Packet packet2 = new Packet("12:f9:37:d7:de:11","f7:88:g9:hi:j1:22");

		//how many times I want to send packets
		int n = 5;

		//creating new hacker
		Hacker romero = new Hacker("Romero");
		romero.observe(tel, router, network);

		//after initiated handshake
		//cleaning channels in Network network
		network.clearChannels();

		while(n > 0)
		{
			
			n -= 1;
			//before I make a network activity I clear channels
			network.clearChannels();
			network.networkActivity(channel, tel, tel.currentlyConnectedTo(), network);

			//calling method which collects every packet in network
			romero.getAllTheTraffic();

			//then another method which provide only Handshake Packets
			romero.selectHandshakePackets();

			//System.out.println(romero.returnHandshakePacketsInNetwork());

			//list of handshake packets in a network
			ArrayList<HandshakePacket> handshakePackets = new ArrayList<HandshakePacket>();
			handshakePackets = romero.returnHandshakePacketsInNetwork();

			boolean isReconnectedHandshake = romero.checkHandshakePackets();

			//if there was a successful handshake romero get a key
			if(isReconnectedHandshake)
			{
				System.out.println("Hacker captures handshake!");
				//romero safe the key of a handshake
				romero.getKey();
				
				//creating handshake between new client and target access point with achieved key
				romero.createHandshake();
			}
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

		System.out.println(tel.currentlyConnectedTo());
		System.out.println(tel2.currentlyConnectedTo());
		System.out.println(tel23.currentlyConnectedTo());
		

		/*System.out.println(network.goodPair(tel, router));
		System.out.println(network.goodPair(tel2, router));
		System.out.println(network.goodPair(tel23, router));
*/

		System.out.println();
	}		
} 