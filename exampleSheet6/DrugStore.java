public class DrugStore
{
	private ArrayList<Item> pharmaceuticals;	

	public DrugStore()
	{
		pharmaceuticals = new ArrayList<Item>();
	}
	public void addDrug(Item i)
	{
		pharmaceuticals.add(i);
	}

	public void removeDrug(Item i )
	{
		pharmaceuticals.remove(i);
	}

}