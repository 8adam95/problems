import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class TubeMap
{
	private List<Line> lines;

	public TubeMap( String path ) throws FileNotFoundException
	{
		lines = new ArrayList<Line>();
		Scanner scanner = new Scanner( new File("map.txt") );
		
		while(scanner.hasNextLine())
		{
			lines.add(new Line(scanner.nextLine()));
		}
		
		scanner.close();
	}

	public String toString()
	{
		return "Map " + lines;
	}
	
}