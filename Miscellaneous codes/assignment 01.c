#include<stdio.h>
#include<stdlib.h>

struct refat1568{

    int id, batch, phone_no;
    float cgpa;
    char name[50],section[10], adress[20], department[10];

};

int main()

{
    struct refat1568 studentinfo[10];

    int i;

    for(i=0;i<10;i++){

        printf("Enter student- %d Info\n", i+1);
        printf("\nstudent name: ");
        scanf("%s",&studentinfo[i].name);
        printf("Student id: ");
        scanf("%d",&studentinfo[i].id);
        printf("Department: ");
        scanf("%s", &studentinfo[i].department);
        printf("Batch: ");
        scanf("%d",&studentinfo[i].batch);
        printf("Phone No: ");
        scanf("%d",&studentinfo[i].phone_no);
        printf("Adress: ");
        scanf("%s",&studentinfo[i].adress);
        printf("CGPA: \n");
        scanf("%f",&studentinfo[i].cgpa);


    }

    for(i=0;i<10;i++)
    {
        printf("\nDisplay student-%d Info\n", i+1);
        printf("\nName:%s\t",studentinfo[i].name);
        printf("ID:%d\t",studentinfo[i].id);
        printf("Department:%s\t",studentinfo[i].department);
        printf("Batch:%d\t",studentinfo[i].batch);
        printf("Section:%s\t",studentinfo[i].section);
        printf("Phone No:%011d\t",studentinfo[i].phone_no);
        printf("\tCGPA:%.2f\n\n",studentinfo[i].cgpa);
    }
    return 0;
}

