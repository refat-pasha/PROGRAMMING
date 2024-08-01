import java.util.Scanner;

public class SequenceOfNumbersAndSum_1101 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int a,b,temp,i;
        int sum1=0,sum2=0;
        while(true){
            a= input.nextInt();
            b= input.nextInt();
            if(a<=0)
                break;
            if(b<=0)
                break;
            if(a>b) {
                temp = a;
                a = b;
                b = temp;

                for (i = a; i <= b; i++) {
                    sum1 += i;
                    System.out.printf("%d ", i);
                }

                System.out.println("Sum=" + sum1);
            }
            else if(a<b){

                for (i = a; i<=b; i++) {
                    sum2 += i;
                    System.out.printf("%d ",i);
                }

                System.out.println("Sum=" + sum2);
            }
        }
    }
}
