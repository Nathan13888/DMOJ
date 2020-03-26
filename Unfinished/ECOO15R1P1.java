import java.io.BufferedReader;
import java.io.InputStreamReader;

// TODO: DOESNT WORKKKK - 12:40AM Sat March 21st, 2020
public class ECOO15R1P1 {

	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int[] widths = new int[10];
		String[][] words = new String[10][];
		for (int i = 0; i < 10; i++) {
			widths[i] = Integer.parseInt(br.readLine());
			words[i] = br.readLine().split(" ");
		}

//		for (int i : widths)
//			System.out.println(i);
//		for (String[] arr : words)
//			for (String w : arr)
//				System.out.println(w);

		for (int i = 0; i < 10; i++) {
			int curWidth = 0;
//			boolean canFit = true;
			boolean firstWord = true;
			for (String w : words[i]) {
				if (curWidth + w.length() <= widths[i]) {
					if (!firstWord) {
						System.out.print(" ");
						curWidth++;
					}
					if (firstWord)
						firstWord = false;
					System.out.print(w);
					curWidth += w.length();
				} else {
//					canFit = false;
					System.out.print("\n");
					if (w.length() <= widths[i]) {
						System.out.println(w);
					} else {
						System.out.print(w.substring(0, curWidth));
						System.out.print("\n" + w.substring(curWidth, w.length()));
						curWidth = w.length() - curWidth;
					}
				}

				curWidth = 0;
//				canFit = true;
			}
			System.out.println("=====");
		}
		br.close();
	}
}