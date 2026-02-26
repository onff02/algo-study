import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        
        System.out.println(getHansuCount(N));
    }

    public static int getHansuCount(int num) {
        int count = 0;

        if (num < 100) {
            return num;
        } else {
            count = 99;
            
            if (num == 1000) {
                num = 999;
            }

            for (int i = 100; i <= num; i++) {
                int h = i / 100;         
                int t = (i / 10) % 10;   
                int u = i % 10;          

                if ((h - t) == (t - u)) {
                    count++;
                }
            }
        }
        return count;
    }
}