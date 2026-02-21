import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        int[][] grid = new int[N][M];
        for (int i = 0; i < N; i++) {
            String line = br.readLine();
            for (int j = 0; j < M; j++) {
                grid[i][j] = line.charAt(j) - '0';
            }
        }

        int maxLen = Math.min(N, M);


        for (int len = maxLen; len >= 1; len--) {
            // 시작점범위
            for (int i = 0; i <= N - len; i++) {
                for (int j = 0; j <= M - len; j++) {
                    int val = grid[i][j]; // 기준점 숫자
                    
                    // 4개의 꼭짓점이 모두 기준점과 같은지 확인
                    if (val == grid[i][j + len - 1] && 
                        val == grid[i + len - 1][j] && 
                        val == grid[i + len - 1][j + len - 1]) {
                        
                        System.out.println(len * len);
                        return; 
                    }
                }
            }
        }
    }
}