import java.util.Random;

public class Battlefield
{
	public static void main(String[] args)
	{
		//declaration and initialization basic variables
		//with information about each soldier.

		double speedOfArbalist = 12.3;
		double speedOfLancer = 4.3;
		double speedOfCataphract = 5.9;

		double range = 10.0;

		Random rand = new Random();

		//declaration and initialization size of the battlefield

		double maxX = 100.0;
		double maxY = 100.0;

		double minX = 0.0;
		double minY = 0.0;

		Soldier outOfGame = new Soldier("Loser", 0, -1.0, -1.0);

		//number of battles
		int battles = 30;

		for(int i = 1; i <= battles; i++)
		{
			//creating 3 new objects with random positions

			double randomValueX = minX + (maxX-minX)*rand.nextDouble();
			double randomValueY = minY + (maxY-minY)*rand.nextDouble();

			Arbalist arbalist = new Arbalist("Arbalist", speedOfArbalist, randomValueX, randomValueY, range);

			randomValueX = minX + (maxX-minX)*rand.nextDouble();
			randomValueY = minY + (maxY-minY)*rand.nextDouble();

			Lancer lancer = new Lancer("Lancer", speedOfLancer, randomValueX, randomValueY);	

			randomValueX = minX + (maxX-minX)*rand.nextDouble();
			randomValueY = minY + (maxY-minY)*rand.nextDouble();

			Cataphract cataphract = new Cataphract("Cataphract", speedOfCataphract, randomValueX, randomValueY);	

			double distanceAL =  arbalist.distance(lancer);

			//times for every pair (x,y) of different soldiers; (x,y) != (y,x)

			double timeAL = arbalist.time(lancer);
			double timeCA = cataphract.time(arbalist);
			double timeLC = lancer.time(cataphract);

			boolean visited = false;

			if(timeAL <= timeCA && timeAL <= timeLC && arbalist.getRange() >= distanceAL)
			{
				System.out.println(arbalist);
				lancer.setNewPosition(outOfGame);
				visited = true;
				//arbalist stay in the same position, lancer go to position (-1, -1)
			}
			else if(timeCA <= timeLC && visited == false)
			{
				System.out.println(cataphract);
				cataphract.setNewPosition(arbalist);
				arbalist.setNewPosition(outOfGame);
				visited = true;
			}

			else if(timeLC <= timeCA && visited == false)
			{
				System.out.println(lancer);
				lancer.setNewPosition(cataphract);
			}
		}
	}
}


