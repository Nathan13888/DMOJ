import java.io.BufferedReader;
import java.io.InputStreamReader;

public class NextPrime {

	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int org = Integer.parseInt(br.readLine());
		int num = org;
		if (checkPrime(num))
			System.out.println(num);
		else {
			boolean isPrime = false;
			while (!isPrime) {
				if (num == org || num % 2 == 0)
					num++;
				else
					num += 2;
				if (isPrime = checkPrime(num)) {
					System.out.println(num);
					break;
				}
			}
		}

		br.close();
	}

	static boolean checkPrime(int n) {
		if (n <= 1)
			return false;
		if (n <= 3)
			return true;
		if (n % 2 == 0 || n % 3 == 0)
			return false;

		for (int i = 5; i * i <= n; i = i + 6)
			if (n % i == 0 || n % (i + 2) == 0)
				return false;

		return true;
	}
}