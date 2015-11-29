public class Station
{
	private String name;

	public Station(String aName)
	{
		this.name = aName;
	}
	
	@Override
	public String toString()
	{
		return this.name;
	}

	@Override
	public boolean equals(Object object)
	{
		Station otherStation = (Station) object;
		return this.name.equals(otherStation.name);
	}


}