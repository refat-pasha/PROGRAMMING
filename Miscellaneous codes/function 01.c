#include<stdio.h>

  int sum(int a,int b,int c)
    {
        return a+b+c;
    }

   int sub(int a,int b,int c)
    {
        return a-b-c;
    }

   int mul(int a,int b,int c)
    {
        return a+b+c;
    }


   int div(int a,int b,int c)
    {
        return a-b-c;
    }
    int mult(int i,int j)
    {   int h;
         scanf("%d",&h);
        for(i=h;i<=h;i++)
        {
            for(j=1;j<=10;j++)
            {
                printf("%d*%d=%d\n",i,j,i*j);
            }
            printf("\n");
        }
        return mult;
    }
    int str(char i[20])
    {
        scanf("%s",i);
        return i;
    }
    int matrix(int i,int j)
    {
        int n[3][3];
        scanf("%d",&n);
        for(i=1;i<3;i++)
        {
            for(j=1;j<3;j++)
            {
                scanf("%d",&n[3][3]);
            }
        }
        for(i=1;i<3;i++)
        {
            for(j=1;j<3;j++)
            {
                matrix(n[3][3]);
            }
        }
            printf("\n");
        return matrix;
    }

int main()
{
    printf("select (1-4)\n");
    printf("1.sum\n");
    printf("2.sub\n");
    printf("3.mul\n");
    printf("4.div\n");
    printf("5.multiplication table\n");
    printf("6.string\n");
    printf("7.matrix\n");

    int n1,n2,n3,n,a,b;

    scanf("%d",&n);
    printf("you've select %d\n",n);

    if(n==1 || n==2 || n==3|| n==4)
        {
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n==1)
    {
    printf("sum is: %d\n",sum(n1,n2,n3));
    }

    if(n==2)
    {
    printf("sub is: %d\n",sub(n1,n2,n3));
    }

    if(n==3)
    {
    printf("sum is: %d\n",mul(n1,n2,n3));
    }

    if(n==4)
    {
    printf("sub is: %d\n",div(n1,n2,n3));
    }

        }
    if(n==5)
    {
        int i,j;
        printf("\n",mult(i,j));
    }
   /* if(n==6)
    {
        char i[20];
        printf("the string is: %s\n",i[]);
    }*/
    if(n==7)
    {
        printf("the matrix is: ",matrix(a,b));
    }




}
