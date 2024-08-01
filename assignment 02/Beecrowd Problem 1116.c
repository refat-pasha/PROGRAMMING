#include<stdio.h>
int main()
{
    //Dividing X by Y
    int i, n;
    float a, b;
    printf("enter the limitation of division X,Y:");
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
    printf("Enter the value of X:",a);
    scanf("%f", &a);

    printf("Enter the value of Y:",b);
    scanf("%f", &b);


    if (a==0 && b==0)printf("0.0\n");
    else if(b == 0)printf("division impossible\n");
    else if(a == 0)printf("0.0\n");
    else printf("\nThe value of division is:%.1f\n\n",a/b);
    }
    return 0;
}

