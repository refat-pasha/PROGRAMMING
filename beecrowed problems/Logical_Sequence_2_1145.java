import java.util.Scanner;

public class Logical_Sequence_2_1145 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a,b;
        a= input.nextInt();
        b= input.nextInt();

            for (int i = 1; i <= b; i+=3) {
                for( int j= i ;j<=i+(a-1);j++){
                    System.out.printf("%d ",j);
                }
                System.out.println();
            }


    }
}
