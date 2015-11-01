public class Total
{
	public static void main(String args[])
	{
		int total = 0;
		int c = 0;
		try
		{
			while(true)
			{
				total += Integer.parseInt(args[c++]);
			}
		}
		catch(Exception e)
		{
			System.out.println("Total is "+total);
		}

	}

}