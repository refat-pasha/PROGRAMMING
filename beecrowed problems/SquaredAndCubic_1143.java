import java.util.Scanner;

public class SquaredAndCubic_1143 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a;
        int i;
        a= input.nextInt();
        for (i=1;i<=a;i++){
            System.out.printf("%d %d %d\n",i,i*i,i*i*i);
        }
    }
}
