import java.util.Scanner;

public class SimpleFactorial_1153 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a,i,b=1;
        a = input.nextInt();
        for (i = a; i >=1; i--) {
             b=b*i;
        }
        System.out.println(b);
    }
}
