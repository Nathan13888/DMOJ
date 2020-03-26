import java.io.BufferedReader;
import java.io.InputStreamReader;

public class CCC13J1 {

	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int a1 = Integer.parseInt(br.readLine());int a2 = Integer.parseInt(br.readLine());
		System.out.println(2*a2-a1);
		br.close();
	}
}