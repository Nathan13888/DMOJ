import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class J2 {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int spaces = Integer.parseInt(br.readLine());
		String yest = br.readLine();
		String tody = br.readLine();

		br.close();

		int occup = 0;

		for (int i = 0; i < spaces; i++) {
			if (yest.charAt(i) == 'C' && tody.charAt(i) == 'C') {
				occup++;
			}
		}

		System.out.println(occup);
	}
}
