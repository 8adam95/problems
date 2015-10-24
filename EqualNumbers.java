public class EqualNumbers
{
  public static void main(String[] args)
  {
    double balance = 100;
    int target = 200;
    double rate = .1;
    int year = 0;
    while(balance < target)
    {
      double interest = balance*rate;
      balance = balance + interest;
      year++;
      System.out.printf("Year %d: %8.2f", year, balance);
    
    }
  }
}