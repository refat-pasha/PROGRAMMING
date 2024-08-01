
#include<stdio.h>
#include<stdlib.h>

struct student{

    int id;
    float cgpa;

};

int main()
{

    struct student student1, student2;

    student1.id=1568;
    student1.cgpa=3.69;

    printf("student-1 id: %d\t", student1.id);
    printf("student-1 cgpa: %.2f\n", student1.cgpa);

    scanf("\n%d", &student2.id);
    scanf("%f", &student2.cgpa);

    printf("student-2 id: %d\t", student2.id);
    printf("student-2 cgpa: %.2f\n\n", student2.cgpa);

    return 0;
}
