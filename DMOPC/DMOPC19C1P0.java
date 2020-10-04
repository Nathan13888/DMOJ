import java.util.Scanner;

public class DMOPC19C1P0 {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int numbers = s.nextInt() - 1;
		int first = s.nextInt(); // first input
		int l = first, r = first;
		for (int i = 0; i < numbers; i++) {
			int n = s.nextInt();
			if (n < l)
				l = n;
			if (n > r)
				r = n;
		}
		System.out.println(r - l);

		s.close();
	}
}
