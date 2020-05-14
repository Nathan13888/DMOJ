import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class J3 {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		String[] line = br.readLine().split(" ");
		int[] in = new int[5];
		for (int i = 0; i < 5; i++) {
			in[i] = Integer.parseInt(line[i]);
		}

		br.close();

		String[] lines = new String[5];

		lines[0] = "0 ";
		lines[0] += in[0] + " ";
		lines[0] += in[1] + " ";

//		int prev = 0;
//
//		for (int l = 1; l <= 5; l++) {
//			int a = (l != 1) ? prev + Integer.parseInt(line[l - 2]) : 0, b = 0;
//
//			for (int x = 1; x <= 5; x++) {
//				int i = x - 1;
//				if (l == x) {
//					lines[i] += "0";
//				} else if (l > x) {
//					lines[i] += String.valueOf(a);
//					a-=;
//				} else if (l < x) {
//					b+=;
//					lines[i] += String.valueOf(b);
//				} else {
//					System.out.println("SHIT HAPPENED");
//				}
//				if (l != 5)
//					lines[i] += " ";
//			}
//		}

		for (String s : lines) {
			System.out.println(s);
		}
	}
}
