import java.util.Scanner;

public class Ages_1154 {
    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
       int a,sum=0,b=0;
       float avg;
       int i=1;
       while (true){
           a = input.nextInt();
           sum=sum+a;
           b++;
           if(a<0) {
               break;
           }
       }
       avg=(float) (sum/b);
        System.out.println(avg);

    }
}



