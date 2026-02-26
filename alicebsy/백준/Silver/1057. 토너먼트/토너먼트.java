import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int jimin = sc.nextInt();
        int hansu = sc.nextInt();
        
        int round = 0;
        
        // 두 사람의 번호가 같아질 때까지 반복
        while (jimin != hansu) {
            // 다음 라운드 번호 계산
            jimin = (jimin + 1) / 2;
            hansu = (hansu + 1) / 2;
            
            round++;
        }
        
        System.out.println(round);
        
        sc.close();
    }
}