import java.util.Scanner;

public class MultiplesOf13_1132 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a,b,i,sum1=0,sum2=0;
        a=input.nextInt();
        b=input.nextInt();
        if(a>b){
            for(i=b;i<a;i++){
                if(i%13!=0){
                    sum1=sum1+i;
                }
            }
            System.out.println(sum1);
        }
        else if(a<b) {
            for(i=a;i<b;i++){
                if(i%13!=0){
                    sum2=sum2+i;
                }
            }
            System.out.println(sum2);
        }
    }
}

