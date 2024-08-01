#include <stdio.h>
int main()
{
    //Lowest Number and Position
   int a,b,c,d,e,n, p, min;
   printf("enter the limitation:");
    scanf("%d", &n);
    int X[n];
    for(a=0; a<n; a++)
        scanf("%d", &X[a]);
    min=X[0];
    for(a=1; a<n; a++)
    {
        if(min>X[a])
        {
            min=X[a];
            p=a;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", min, p);
    return 0;
}
