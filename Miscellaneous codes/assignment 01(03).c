
#include<stdio.h>
#include<stdlib.h>

struct student{

    int id;
    float cgpa;

};

int main()

{
    struct student studentinfo[5];

    int i;

    for(i=0;i<2; i++)
    {
        printf("Enter Student-%d info:\n", i+1);
        scanf("%d", &studentinfo[i].id);
        scanf("%f", &studentinfo[i].cgpa);
        printf("\n");
    }

    for (i=0;i<2;i++)
    {
        printf("\ndisplay student- %d info:\n", i+1);
        printf("id:%d\t", studentinfo[i].id);
        printf("cgpa:%.2f\n\n", studentinfo[i].cgpa);
    }

    return 0;
}
