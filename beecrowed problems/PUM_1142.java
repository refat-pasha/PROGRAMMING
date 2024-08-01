import java.util.Scanner;

public class PUM_1142 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n= input.nextInt();
        int i;
        for (i=0;i<n*4;){
            System.out.printf("%d %d %d PUM\n",(i+1),(i+2),(i+3));
            i=i+4;
        }
    }
}
