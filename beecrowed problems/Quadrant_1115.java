import java.util.Scanner;

public class Quadrant_1115 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while (true){
            int a = input.nextInt();
            int b = input.nextInt();
            if(a>0 && b>0){
                System.out.println("primeiro");
            }
            if(a>0 && b<0){
                System.out.println("quarto");
            }
            if(a<0 && b< 0){
                System.out.println("terceiro");
            }
            if(a<0 && b>0){
                System.out.println("segundo");
            }
            if(a==0 && b==0){
                break;
            }
        }
    }
}
