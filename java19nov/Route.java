





	
	
		
		
				extensions.add(new Route(usedStops, new TubeStop(newStation, line)));
			completeString += stop + ", ";
		ArrayList<Route> extensions = new ArrayList<Route>();
		for(TubeStop stop : usedStops )
		if(newStation != null)
		return "[" + completeString.substring(0, completeString.length() - 2) + "]";
		return extensions;
		return usedStops.get(usedStops.size()-1).getStation();
		Station headOfRoute = headOfRoute();
		Station newStation = line.previousStation(headOfRoute);
		String completeString = "";
		this.usedStops = new ArrayList<TubeStop>(stops);
		this.usedStops.add(stop);
		usedStops = new ArrayList<TubeStop>();
		usedStops.add(new TubeStop(station, line));
		{
		{	
		}
		}
	@Override
	private List<TubeStop> usedStops;
	public ArrayList<Route> getRouteExtensions(Line line)
	public Route(List<TubeStop> stops, TubeStop stop)
	public Route(Station station, Line line)
	public Station headOfRoute()
	public String toString()
	{
	{
	{
	{
	{
	}
	}
	}
	}
	}
import java.util.ArrayList;
import java.util.List;
public class Route
{
}