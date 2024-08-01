import java.util.Scanner;

public class Experiments_1094{
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int C1=0,R1=0,S1=0,x;
        String b;
        int n = input.nextInt();
        for (int i = 1; i <=n ; i++) {
            int a = input.nextInt();
            b = input.next();
            if(b.equals("C")){
                C1=C1+a;
            }
            if(b.equals("R")){
                R1=R1+a;
            }
            if(b.equals("S")){
                S1=S1+a;
            }
        }
        x=C1+R1+S1;
        System.out.printf("Total: %d cobaias\n",x);

        System.out.println( "Total de coelhos: "+C1);
        System.out.println( "Total de ratos: "+R1);
        System.out.println( "Total de sapos: "+S1);

        float p =(float) (C1*100)/x;
        float q = (float)(R1*100)/x;
        float r = (float) (S1*100)/x;
        System.out.println("Percentual de coelhos: " +String.format("%.2f",p)+" %" );
        System.out.println("Percentual de ratos: " +String.format("%.2f",q)+" %" );
        System.out.println("Percentual de sapos: " +String.format("%.2f",r)+" %" );

    }
}

