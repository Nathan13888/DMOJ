import java.io.BufferedReader;
import java.io.InputStreamReader;

public class AminusB {

	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int q = Integer.parseInt(br.readLine());
		String[][] lines=new String[q][2];
		for (int i = 0; i < q; i++)
			lines[i]=br.readLine().split(" ");
		for (int i = 0; i < q; i++)
			System.out.println(Integer.parseInt(lines[i][0]) - Integer.parseInt(lines[i][1]));
		br.close();
	}
}