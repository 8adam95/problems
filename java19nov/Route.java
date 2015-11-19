import java.util.ArrayList;
import java.util.List;

public class Route
{
	private List<TubeStop> usedStops;

	public Route(Station station, Line line)
	{
		usedStops = new ArrayList<TubeStop>();
		usedStops.add(new TubeStop(station, line));
	}
	
	public Route(List<TubeStop> stops, TubeStop stop)
	{
		this.usedStops = new ArrayList<TubeStop>(stops);
		this.usedStops.add(stop);
	}

	public ArrayList<Route> getRouteExtensions(Line line)
	{
		ArrayList<Route> extensions = new ArrayList<Route>();
		Station headOfRoute = headOfRoute();
		Station newStation = line.previousStation(headOfRoute);

		if(newStation != null)
		{
				extensions.add(new Route(usedStops, new TubeStop(newStation, line)));
		}
		return extensions;
	}

	public Station headOfRoute()
	{
		return usedStops.get(usedStops.size()-1).getStation();
	}

	@Override
	public String toString()
	{
		String completeString = "";
		for(TubeStop stop : usedStops )
		{	
			completeString += stop + ", ";
		}
		
		return "[" + completeString.substring(0, completeString.length() - 2) + "]";
		
	}
	
}