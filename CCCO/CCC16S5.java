import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class CCC16S5 {

	int N;
	long T;
	int[] OLD;
	int[] NEW;

	void calc(int k) {
		int st = (int) (((long) 1) << k) % N;

		for (int i = 0; i < N; i++) {
//			int L = i - st;
//			int R = i + st;
//			if (R < 0)
//				R += N;
//			if (R > N - 1)
//				R -= N;
//			System.out.println(L);
//			System.out.println(R);
			NEW[i] = OLD[(i - st) >= 0 ? i - st : N + (i - st)] ^ OLD[(i + st) % N];
//			NEW[i] = OLD[L] ^ OLD[R];
		}
		for (int i = 0; i < N; i++)
			OLD[i] = NEW[i];
//		System.arraycopy(NEW, 0, OLD, 0, N);
	}

	public CCC16S5() throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());

		N = Integer.parseInt(st.nextToken());
		OLD = new int[N + 69];
		NEW = new int[N + 69];
		T = Long.parseLong(st.nextToken());
		String in = br.readLine();

		for (int i = 0; i < N; i++)
			OLD[i] = in.charAt(i) - '0';
		for (int i = 49; i >= 0; i--)
			if (((T >> i) & 1) == 1)
				calc(i);
		for (int i = 0; i < N; i++)
			System.out.print(OLD[i]);
	}

	public static void main(String[] args) throws Exception {
		new CCC16S5();
	}
}
