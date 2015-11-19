import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Line {
	
	private String name;
	
	private List<Station> stations;
	
	public Line(String nameAndStations) {
		
		stations = new ArrayList<Station>();
		
		Scanner scanner = new Scanner(nameAndStations);
		
		name = scanner.next();
		
		while(scanner.hasNext())
		{	
			stations.add( new Station(scanner.next()) );
		}
		
		scanner.close();
	}

	public Station previousStation(Station station)
	{
		int positionOnLine = stations.indexOf(station);
		if(positionOnLine > 0)
		{
			return stations.get(positionOnLine-1);
		}
		return null;
		}

	public Station nextStation(Station station)
	{
		int positionOnLine = stations.indexOf(station);
		if(positionOnLine >= 0 && positionOnLine < stations.size()-1)
		{
			return stations.get(positionOnLine+1);
		}
		return null;
	}

	public String toString()
	{
		return "Line: " + name + " Stations: " + stations;
	}
	public String getName()
	{
		return name;
	}
	
}