public class TubeStop {
	
	private Station station;
	private Line line;
	
	public TubeStop( Station station, Line line )
	{
		this.station = station;
		this.line = line;
	}

	public Station getStation()
	{
		return station;
	}

	public Line getLine()
	{
		return line;
	}
	
	@Override
	public String toString()
	{
		return station + " on " + line.getName();
	}
	
}