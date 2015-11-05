public class Soldier
{
	private String name;
	private double speed;
	private double posX;
	private double posY;

	public Soldier(String aName, double speed, double posx, double posy)
	{
		this.name = aName;
		this.speed = speed;
		this.posX = posx;
		this.posY = posy;
	}

	public double getX()
	{
		return posX;
	}
	public double getY()
	{
		return posY;
	}

	public double distance(Soldier soldier)
	{
		return (this.posX-soldier.posX)*(this.posX-soldier.posX) + (this.posY-soldier.posY)*(this.posY-soldier.posY);
	}

	//I use formula distance = speed*time to calculate time
	//time = distance/speed

	public double time(Soldier soldier)
	{
		double d = distance(soldier);
		return Math.sqrt(d)/(this.speed);

	}

	public String toString()
	{
		return "The winner is " + name + "on the original position " + posX + " " +posY + "!";
	}

}