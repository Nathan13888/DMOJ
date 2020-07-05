import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class J1 {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int s1 = Integer.parseInt(br.readLine());
		int s2 = Integer.parseInt(br.readLine());
		int s3 = Integer.parseInt(br.readLine());
		int s4 = Integer.parseInt(br.readLine());
		br.close();

		if (s1 == 8 || s1 == 9) {
			if (s4 == 8 || s4 == 9) {
				if (s2 == s3) {
					System.out.println("ignore");
					return;
				}
			}
		}

		System.out.println("answer");
	}
}
