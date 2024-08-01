import java.util.Scanner;

public class TypeOfFuel_1134 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n,a=0,g=0,d=0;

        while (true){
            n= input.nextInt();
            if(n==1){
                a++;
            }
            if(n==2){
                g++;
            }
            if(n==3){
                d++;
            }
            if(n==4)
                break;

        }
        System.out.println("MUITO OBRIGADO");
        System.out.println("Alcool: "+a);
        System.out.println("Gasolina: "+g);
        System.out.println("Diesel: "+d);
    }
}
