#include<stdio.h>
int main()
{
    int i,n,num,even_sum=0,odd_sum=0,prime_sum=0,count=0;

    printf("enter the limitation:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
            {
                even_sum=even_sum+n;
            }

        else if(n%2==1)
        {
             odd_sum=odd_sum+n;
        }


    if(n==0 || n==1)
    {
        count=1;
    }
    for(i=2;i<num;i++)
    {
        if(n%i==0)
        {
            count++;
        }

    }
    if(count==0)
    {
         prime_sum=prime_sum+n;
    }
    count=0;


    }
    printf("the even sum is:%d\n",even_sum);
    printf("the odd sum is:%d\n",odd_sum);
    printf("the prime sum is:%d\n",prime_sum);

    return 0;
}
