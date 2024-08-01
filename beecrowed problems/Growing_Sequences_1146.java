import java.util.Scanner;

public class Growing_Sequences_1146 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a;
        while(true){
            a = input.nextInt();
            if(a>0){
                for (int i = 1; i <= a; i++) {
                    System.out.print(i+" ");
                }
                System.out.println();
            }
            else{
                break;
            }
        }
    }
}
