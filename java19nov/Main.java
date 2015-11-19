import java.io.FileNotFoundException;

public class Main
{
	public static void main( String[] args ) throws FileNotFoundException
	{
		TubeMap map = new TubeMap("map.txt");
		Station start = new Station("WestActon");
		Station end = new Station("EastActon");
		FindARoute findARoute = new FindARoute(map, start, end);	
	}
}