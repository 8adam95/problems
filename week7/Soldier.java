public class Soldier
{
	private double posX;
	private double posY;
	Random rand = new Random();

	void setRandomPosition()
	{
		this.posX = rand.nextDouble()*100;
		this.posY = rand.nextDouble()*100;
	}


}