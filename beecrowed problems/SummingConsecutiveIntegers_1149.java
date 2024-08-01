import java.util.Scanner;

public class SummingConsecutiveIntegers_1149 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a,b,sum =0;
        a = input.nextInt();
        b = input.nextInt();
        while (b<=0){
            b = input.nextInt();
            }
                for (int i = 0; i < b; i++) {
                    sum+=i+a;
                }
                System.out.println(sum);
    }

}


