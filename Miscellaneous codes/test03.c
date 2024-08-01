/*#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
        {
            printf("\n Index %d",i);
            printf("\n %d is even",i);
        }
        else
        {
             printf("\n index %d",i);
            printf("\n  %d is odd",i);
        }

    }
    return 0;
}
*/

/*#include<stdio.h>
int main()
{
    int marks[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        printf("enter mark:");
        scanf("%d",&marks[i]);
        sum = sum+marks[i];
    }
    printf("sum = %d",sum);
    return 0;
}*/

/*#include <stdio.h>
struct covid
{
    int firstDoseDate,secondDoseDate,boosterDoseDate;
} moderna, astraZeneca;
int main()
{
struct covid moderna;

moderna.firstDoseDate = 10;
moderna.secondDoseDate = 19;
moderna.boosterDoseDate = 31;
astraZeneca = moderna;
astraZeneca.firstDoseDate = 10;
astraZeneca.secondDoseDate = 11;
astraZeneca.boosterDoseDate = 12;
printf("I have taken First Dose on %d March 2022.\n", astraZeneca.firstDoseDate);
printf("Then the 2nd Dose on %d March, 2022.\n", astraZeneca.secondDoseDate);
printf("And the Booster Dose on %d March, 2022.\n", astraZeneca.boosterDoseDate);


 return 0;

}
*/




/*#include<stdio.h>
int main()
{
    int num[5]={10,20,30,40,50};
    int *pointer=num+2;
    printf("pointer is pointing %d\n",*pointer);
    printf("the array has started at %d\n",*num);
    return 0;
}
*/


/*#include<stdio.h>


int fun(int val)
{
    if(val==0) return 1;

    return 2*fun(val-1);
}

int main()
{
    int num=5;
    int res=fun(num);
    printf("result =%d\n",res);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i,n,x,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
    sum=sum+x;
    }

        printf("the sum is =%d",sum);


    return 0;
}
*/


/*#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,count;
    gets(str);

    int len=strlen(str);

    for(i=0;i<=len;i++)
    {
        if(str[i]=='o' && str[i]=='k')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}*/


/*#include<stdio.h>
#include<stdlib.h>
int main(){
int a[10],n,i;
system ("cls");
printf("Enter the number to convert: ");
scanf("%d",&n);
for(i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
printf("\nBinary of Given Number is=");
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}
return 0;
}
*/



/*#include<stdio.h>
int main()
{
    int  i,n,m;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m/n;i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }

}*/


/*#include<stdio.h>
int main()
{
    int n=1100;
    int *ptr=&n;
    printf("%d\n",n);
    printf("%p\n",&n);
    printf("%p\n",ptr);



    return 0;
}
*/


/*#include<stdio.h>
void scan(int *p,int *q)
{
    scanf("%d%d",&p,&q);
    printf("%d\n%d\n",p,q);
    printf("%p\n%p\n",&p,&q);
}
void print(int *x,int *y)
{
    printf("a=%d,b=%d\n",&x,&y);
}
int main()
{
    int a,b,*p1,*p2;
    p1=&a;
    p2=&b;
    scan(p1,p2);
    print(&a,&b);
    return 0;
}
*/

/*#include<stdio.h>
int *ptr1,*ptr2,temp;
void swap()
{
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
void print()
{
    printf("x=%d,y=%d\n", *ptr1, *ptr2);
}
int main()
{
    int x,y,i;
    ptr1=&x;
    ptr2=&y;
    for(i=18;i<23;i++)
    {
        x=i;y=i+3;
        swap();
        print();
    }
    return 0;
}*/


/*#include<stdio.h>
struct student
{
    int id;
    char name[20];
    float cgpa;
    }s1={1,"garnaco",3.60},s2={2,"afg",3.80};
    int main()
    {
        int id,name,cgpa;
        struct student *p1=&s1,*p2=&s2;
        printf("%%02d\t%10s\t%03f\n",p1>id,p1>name,p1>cgpa);
        printf("%02d\t%10s\t%03f\n",p2>id,p2>name.p2>cgpa);
        return 0;
    }*/

/*#include<stdio.h>
int main()
{
    int n,i,a,pcount=0,ncount=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a);
    if(a>0)
    {
        pcount++;
    }
    else if(a<0)
    {
        ncount++;
    }
}
printf("positive temp: %d and negative temp %d",ncount,pcount);

}*/

/*#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    gets(s1);
    gets(s2);
    strcpy(s2,s1);
    strrev(s2);
    if(!strcmp(s1,s2))
    printf("plaindroome");
    else
        printf("not");
    return 0;
}
*/

/*#include<stdio.h>
int main()
{
    int n,i,s,b,max;
    char a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d",&a[i],&b,&s);

    }
    b=max;
    s=max;
    if(b>max && s>max)
    {
         printf("%s%d%d",a[i],b,s);
    }

}*/

#include<stdio.h>
int num(int x)
{
    if(x==1)
        return 10;
    else if(x==2)
        return 20;
    return (x-1)*(x-2)*100;
}
int main()
{
    int n;
    scanf("%d",&n);
    int z=num(n);
    printf("%d\n",z);
    return 0;
}
