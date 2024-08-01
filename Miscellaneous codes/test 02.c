/*#include<stdio.h>

int main()
{
    int i,j;
    for(i=1,j=60;i<15,j>=0;i+=3,j-=5){

            printf("I=%d J=%d\n",i,j);
        }

}
*/

/*#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<39;i++)
    {
        printf("-");
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
         printf("|                                     |\n");
    }
    for(i=0;i<39;i++)
    {
        printf("-");
    }

    printf("\n");

    return 0;
}
#include<stdio.h>
int main()
{

    printf("---------------------------------------\n");
    printf("|        Roberto                      |\n");
    printf("|                                     |\n");
    printf("|        5786                         |\n");
    printf("|                                     |\n");
    printf("|        UNIFEI                       |\n");
    printf( "---------------------------------------\n");

    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%02d\/\%02d\/\%02d\n",b,a,c);
    printf("%02d\/\%02d\/\%02d\n",c,b,a);
    printf("%02d\-\%02d\-\%02d\n",a,b,c);


    return 0;
}/*


#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    printf("A = %d, B = %d, C = %d\n",A,B,C);
    printf("A = %10d, B = %10d, C = %10d\n",A,B,C);
    printf("A = %010d, B = %010d, C = %010d\n",A,B,C);
    printf("A = %-10d, B = %-10d, C = %-10d\n",A,B,C);


    return 0;
}

#include<stdio.h>
int main()
{
    float A,B;
   double C,D;
    scanf("%f%f%lf%lf",&A,&B,&C,&D);
    printf("A = %.6f, B = %.6f\nC = %.6lf, D = %.6lf\n",A,B,C,D);
    printf("A = %.1f, B = %.1f\nC = %.1lf, D = %.1lf\n",A,B,C,D);
    printf("A = %.2f, B = %.2f\nC = %.2lf, D = %.2lf\n",A,B,C,D);
    printf("A = %.3f, B = %.3f\nC = %.3lf, D = %.3lf\n",A,B,C,D);
    printf("A = %.3E, B = %.3E\nC = %.3E, D = %.3E\n",A,B,C,D);
    printf("A = %.0f, B = %.0f\nC = %.0lf, D = %.0lf\n",A,B,C,D);
    return 0;
}

#include<stdio.h>
int main()
{

    printf("       A\n");
    printf("      B B\n");
    printf("     C   C\n");
    printf("    D     D\n");
    printf("   E       E\n");
    printf("    D     D\n");
    printf("     C   C\n");
    printf("      B B\n");
    printf("       A\n");




    return 0;
}


#include<stdio.h>
int main()
{
     printf("---------------------------------------\n");
    printf("|x = 35                               |\n");
    printf("|                                     |\n");
    printf("|               x = 35                |\n");
    printf("|                                     |\n");
    printf("|                               x = 35|\n");
    printf("---------------------------------------\n");
    return 0;
}


#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<39;i++)
    {
        printf("-");
    }
    printf("\n");
    printf("|  decimal  |  octal  |  Hexadecimal  |\n");
   for(i=0;i<39;i++)
    {
        printf("-");
    }
    printf("\n");
    printf("|      0    |    0    |       0       |\n");
    printf("|      1    |    1    |       1       |\n");
    printf("|      2    |    2    |       2       |\n");
    printf("|      3    |    3    |       3       |\n");
    printf("|      4    |    4    |       4       |\n");
    printf("|      5    |    5    |       5       |\n");
    printf("|      6    |    6    |       6       |\n");
    printf("|      7    |    7    |       7       |\n");
    printf("|      8    |   10    |       8       |\n");
    printf("|      9    |   11    |       9       |\n");
    printf("|     10    |   12    |       A       |\n");
    printf("|     11    |   13    |       B       |\n");
    printf("|     12    |   14    |       C       |\n");
    printf("|     13    |   15    |       D       |\n");
    printf("|     14    |   16    |       E       |\n");
    printf("|     15    |   17    |       F       |\n");
    printf("---------------------------------------\n");



    return 0;
}


#include<stdio.h>
int main()
{
    printf("\"Ro'b'er\tto\\/\"\n");
    printf("(._.) ( l: ) ( .-. ) ( :l ) (._.)\n");
    printf("(^_-) (-_-) (-_^)\n");
    printf("(\"_\") ('.')\n");

    return 0;
}


#include<stdio.h>
int main()
{
    char x,y,z;
    scanf("%c\n",&x);
    scanf("%c\n",&y);
    scanf("%c",&z);
    printf("A = %c, B = %c, C = %c\n",x,y,z);
    printf("A = %c, B = %c, C = %c\n",y,z,x);
    printf("A = %c, B = %c, C = %c\n",z,x,y);



    return 0;
}


#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d.%d",&a,&b);
    printf("%d.%d\n",b,a);




    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d.%d.%d\-\%d",&a,&b,&c,&d);
    printf("%03d\n",a);
    printf("%03d\n",b);
    printf("%03d\n",c);
    printf("%02d\n",d);


    return 0;
}
*/


/*#include<stdio.h>
 int main()
 {
     int i;
     char a='a';
     for(i=96;i<122;i++)
     {
         printf("%d e %c\n",i+1,a++);
     }


     return 0;
 }*/

 /*#include<stdio.h>
 int main()
 {
     double a=234.345,b=45.698;
     printf("%.6lf - %.6lf\n",a,b);
     printf("%.0lf - %.0lf\n",a,b);
     printf("%.1lf - %.1lf\n",a,b);
     printf("%.2lf - %.2lf\n",a,b);
     printf("%.3lf - %.3lf\n",a,b);
     printf("%e - %e\n",a,b);
     printf("%E - %E\n",a,b);
     printf("%.3lf - %.3lf\n",a,b);
     printf("%.3lf - %.3lf\n",a,b);


     return 0;
 }
*/

/*#include<stdio.h>
int main()
{
    int i,x,y,a=0;
    scanf("%d %d",&x,&y);
   for(i=x;i<=y;i++)
   {
     a=a+i;
   }
    printf("%d\n",a);

    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=a * b - c * d;
    printf("DIFERENCA = %d\n",e);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    double a,b,media;
    scanf("%lf%lf",&a,&b);
    media= (a*3.5+b*7.5)/11;
    printf("MEDIA = %.5lf\n",media);

    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a,b,n,x;
    scanf("%d",&n);
    a=n/3600;
    n=n-(a*3600);
    b=n/60;
    n=n-(b*60);
    printf("%d:%d:%d",a,b,n);



    return 0;
}*/

/*#include<stdio.h>
#include<math.h>
int main()
{
    double a1,a2,b1,b2,x;
    scanf("%lf%lf%lf%lf",&a1,&b1,&a2,&b2);
    x=sqrt(pow(a2-a1,2)+pow(b2-b1,2));
    printf("%.4lf\n",x);


    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d%d",&i,&j);
    if(i%j==0 || j%i==0)
    {
         printf("Sao Multiplos\n");
    }
    else
    {
         printf("Nao sao Multiplos\n");
    }

    return 0;
}
*/

/*#include<stdio.h>
int main()
{
    double a=0;
    scanf("%lf",&a);
    if (a>=0 && a<=25)
        printf("Intervalo [0,25]\n");
    else if(a>=25.00001 && a<= 50.0000000)
        printf("Intervalo (25,50]\n");
    else if(a>=50.00001 && a<=75.0000000)
        printf("Intervalo (50,75]\n");
    else if(a>=75.00001 && a<=100.0000000)
        printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");


    return 0;
}
*/

/*#include<stdio.h>
int main()
{
    double a,b,c,x,y;
    scanf("%lf%lf%lf",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (a+c)>b)
    {
        x=a+b+c;
        printf("Perimetro = %.1lf\n",x);
    }
     else{
        y=((a+b)*c)/2;
        printf("Area = %.1lf\n",y);
     }


    return 0;
}
*/

/*#include <stdio.h>

int main(){
    double a,b,c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(a >= (b+c) || b >= (a+c) || c >= (a+b))
         printf("NAO FORMA TRIANGULO\n");
    else if(a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b))
           printf("TRIANGULO RETANGULO\n");
    else if(a*a > (b*b + c*c) || b*b > (a*a + c*c) || c*c > (a*a + b*b))
           printf("TRIANGULO OBTUSANGULO\n");
    else if(a*a < (b*b + c*c) || b*b < (a*a + c*c) || c*c < (a*a + b*b))
           printf("TRIANGULO ACUTANGULO\n");
    if(a == b && a == c)
            printf("TRIANGULO EQUILATERO\n");
    if((a == b && a != c)  || (a == c && a != b) || (b == c && b != a))
            printf("TRIANGULO ISOSCELES\n");

 return 0;

}*/

/*#include<stdio.h>
int main()
{
    float a,x,y;
    scanf("%f",&a);

    if(a>=0 && a<=400.00)
    {
        x=a*.15;
        y=x+a;
        printf("Novo salario: %.2f\n",y);
        printf("Reajuste ganho: %.2f\n",x);
        printf("Em percentual: 15 %%\n");
    }
    else if(a>=400.01 && a<=800.00)
    {
        x=a*.12;
        y=x+a;
        printf("Novo salario: %.2f\n",y);
        printf("Reajuste ganho: %.2f\n",x);
        printf("Em percentual: 12 %%\n");
    }
    else if(a>=800.01 && a<=1200.00)
    {
        x=a*.10;
        y=x+a;
        printf("Novo salario: %.2f\n",y);
        printf("Reajuste ganho: %.2f\n",x);
        printf("Em percentual: 10 %%\n");
    }
    else if(a>1200.01 && a<=2000.00)
    {
        x=a*.7;
        y=x+a;
        printf("Novo salario: %.2f\n",y);
        printf("Reajuste ganho: %.2f\n",x);
        printf("Em percentual: 7 %%\n");
    }
    else if(a>=2000.01)
    {
        x=a*.4;
        y=x+a;
        printf("Novo salario: %.2f\n",y);
        printf("Reajuste ganho: %.2f\n",x);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
*/

/*#include<stdio.h>
int main()
{
    double a,x,y;
    scanf("%lf",&a);

    if(a>=0 && a<=400.00)
    {
        x=a*15/100;
        y=x+a;
        printf("Novo salario: %.2lf\n",y);
        printf("Reajuste ganho: %.2lf\n",x);
        printf("Em percentual: 15 %%\n");
    }
    else if(a>400 && a<=800.00)
    {
        x=a*12/100;
        y=x+a;
        printf("Novo salario: %.2lf\n",y);
        printf("Reajuste ganho: %.2lf\n",x);
        printf("Em percentual: 12 %%\n");
    }
    else if(a>800 && a<=1200.00)
    {
        x=a*10/100;
        y=x+a;
        printf("Novo salario: %.2lf\n",y);
        printf("Reajuste ganho: %.2lf\n",x);
        printf("Em percentual: 10 %%\n");
    }
    else if(a>1200 && a<=2000.00)
    {
        x=a*7/100;
        y=x+a;
        printf("Novo salario: %.2lf\n",y);
        printf("Reajuste ganho: %.2lf\n",x);
        printf("Em percentual: 7 %%\n");
    }
    else if(a>2000)
    {
        x=a*4/100;
        y=x+a;
        printf("Novo salario: %.2lf\n",y);
        printf("Reajuste ganho: %.2lf\n",x);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
*/


/*#include <stdio.h>

int main()
{
    int a,b,c;
    char c1,c2;
    scanf("%d%c%d%c%d",&a,&c1,&b,&c2,&c);
    printf("%02d/%02d/%02d\n",b,a,c);
    printf("%02d/%02d/%02d\n",c,b,a);
    printf("%02d-%02d-%02d\n",a,b,c);


    return 0;
}
*/


/*#include<stdio.h>
int main()
{
    int a,b;
    double c;
    scanf("%d%d%lf",&a,&b,&c);
    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %.2lf\n",b*c);

    return 0;
}
*/


/*#include<stdio.h>
int main()
{
    int a,b,e,d;
    double c,f,x,y;
    scanf("%d%d%lf",&a,&b,&c);
    scanf("%d%d%lf",&e,&d,&f);

    x=b*c;
    y=d*f;

    printf("VALOR A PAGAR: R$ %.2lf\n",x+y);


    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a;
    double b;
    scanf("%d%lf",&a,&b);
    printf("%.3lf km/l\n",a/b);


    return 0;
}
*/

/*#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);

    a=n/365;
    b=(n%365)/30;
    c=(n%365)%30;

    printf("%d ano(s)\n",a);
    printf("%d mes(es)\n",b);
    printf("%d dia(s)\n",c);


    return 0;
}
*/

/*#include<stdio.h>
int main()
{
    long long a,b,c,c1=0;
    scanf("%lld%lld",&a,&b);
    c1=(a+b)*(b-a+1)/2;

    printf("%lld\n",c1);


    return 0;
}
*/

/*#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==1)
        printf("January\n");
    else if(a==2)
        printf("February\n");
    else if(a==3)
        printf("March\n");
    else if(a==4)
        printf("April\n");
    else if(a==5)
        printf("May\n");
    else if(a==6)
        printf("June\n");
    else if(a==7)
        printf("July\n");
    else if(a==8)
        printf("Agust\n");
    else if(a==9)
        printf("September\n");
    else if(a==10)
        printf("October\n");
    else if(a==11)
        printf("November\n");
    else if(a==12)
        printf("December\n");

    return 0;
}
*/

/*#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x1,x2;
    scanf("%lf%lf%lf",&a,&b,&c);

    x1=(-b+sqrt((b*b)-4*a*c));
    x2=(-b-sqrt((b*b)-4*a*c));

    printf("R1 = %lf\n",x1);
    printf("R2 = %lf\n",x2);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    char a,i,A,Z;
    scanf("%ch",&a);
    for(i=A;i<=Z;i++)
    {
        printf("%d\n",a-64);
    }


    return 0;
}*/


/*#include<stdio.h>
int main()
{
    char A;
    scanf("%ch",&A);

        printf("%d\n",A-64);


    return 0;
}
*/

#include<stdio.h>
int main()
{
    double a,b,c,d,x;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    x=(a*2+b*3+c*4+d*1)/10;
    printf("Media: %.1lf\n",x);
    if(x>=7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(x>=5 || x<=6/9)
    {
        printf("Aluno em exame.\n");
    }
    else if(x<=4.9 || x>0)
    {
        printf("Aluno reprovado.\n");
    }
   // printf("%lf\n");

    return 0;
}
