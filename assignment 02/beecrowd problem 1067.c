#include<stdio.h>
int main()
{
    //Odd Numbers
    int n,i;
    printf("Enter the limitation:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}
