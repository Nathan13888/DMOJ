import java.io.BufferedReader;
import java.io.InputStreamReader;

public class DMOJ4Ever {

	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int q = Integer.parseInt(br.readLine());
		br.close();
		long n = getNumOfLetters(q);
		System.out.println(String.valueOf(n));
		while (n != 4) {
			n = getNumOfLetters(n);
			System.out.println(n);
		}
	}

	private static final int[] units = { 0, 3, 3, 5, 4, 4, 3, 5, 5, 4 };
	private static final int[] twoDigits = { 3, 6, 6, 8, 8, 7, 7, 9, 8, 8 };
	private static final int[] tenMultiples = { 0, 0, 6, 6, 5, 5, 5, 7, 6, 6 };
	private static final int[] placeValues = { 0, 8, 7, 7, 8 };

	private static long getNumOfLetters(long number) {
		long word = 0;
		int index = 0;
		do {
			int num = (int) (number % 1000);
			if (num != 0) {
				int str = convertNumberUpToThreeDigits(num);
				word = str + placeValues[index] + word;
			}
			index++;
			number = number / 1000;
		} while (number > 0);
		return word;
	}

	private static int convertNumberUpToThreeDigits(int number) {
		int word = 0;
		int num = number % 100;
		if (num < 10) {
			word = word + units[num];
		} else if (num < 20) {
			word = word + twoDigits[num % 10];
		} else {
			word = tenMultiples[num / 10] + units[num % 10];
		}

		word = (number / 100 > 0) ? units[number / 100] + 7 + word : word;
		return word;
	}
}