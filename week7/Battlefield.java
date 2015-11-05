import java.util.Random;

public class Battlefield
{
	public static void main(String[] args)
	{
		//declaration and initialization basic variables
		//with information about each soldier.

		double SpeedOfArbalist = 12.3;
		double SpeedOfLancer = 4.3;
		double SpeedOfCataphract = 5.9;

		double range = 10.0;

		Random rand = new Random();

		//declaration and initialization size of the battlefield

		double maxX = 100.0;
		double maxY = 100.0;

		double minX = 0.0;
		double minY = 0.0;

		//number of battles

		int battles = 3;

		for(int i = 1; i <= battles; i++)
		{
			//creating 3 new objects with random positions

			double randomValueX = minX + (maxX-minX)*rand.nextDouble();
			double randomValueY = minY + (maxY-minY)*rand.nextDouble();

			Arbalist arbalist = new Arbalist("Arbalist", SpeedOfArbalist, randomValueX, randomValueY, range);


			randomValueX = minX + (maxX-minX)*rand.nextDouble();
			randomValueY = minY + (maxY-minY)*rand.nextDouble();

			Lancer lancer = new Lancer("Lancer", SpeedOfLancer, randomValueX, randomValueY);	

			randomValueX = minX + (maxX-minX)*rand.nextDouble();
			randomValueY = minY + (maxY-minY)*rand.nextDouble();

			Cataphract cataphract = new Cataphract("Cataphract", SpeedOfCataphract, randomValueX, randomValueY);	

			//distances between 3 soldiers

			double distanceAL;
			double distanceAC;
			double distanceLC;
			

			distanceAL = arbalist.distance(lancer);
			distanceAC = arbalist.distance(cataphract);
			distanceLC = lancer.distance(cataphract);

			System.out.println(distanceAL);

			System.out.println(lancer.time(cataphract));
			//I do not calculate sqrt, because it's imprecise
			//that's why i will count square of the distances
			//and then compare them

//speed*time = distance
		}
	}
}