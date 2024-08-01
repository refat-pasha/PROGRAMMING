import java.util.Scanner;

public class ScoreValidation_1117 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float a,b=0,d=0;
        float x;
        while(true) {
            if(d==2)
                break;
            a = input.nextFloat();
            if (a >= 0 && a <= 10) {
                d++;
                b=b+a;
            }
            else {
                System.out.println("nota invalida");
            }
        }
        x=b/2;
        System.out.printf("media = %.2f\n",x);

    }
}
