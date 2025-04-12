#include<stdio.h>
#include<string.h>

int main()
{
    typedef struct student
    {
        char name[50];
        int roll;
        float marks;
        char grade;
    } student;

    student a; // no need to write "struct student a" anymore

    strcpy(a.name, "Abu Sayeed");
    a.roll=34;
    a.marks=65.76;
    a.grade='C';

    printf("\nName  : %s\n",a.name);
    printf("Roll  : %d\n",a.roll);
    printf("Marks : %.02f\n",a.marks);
    printf("Grade : %c\n",a.grade);

    student b; // no need to write "struct student b" anymore

    strcpy(b.name, "Mir Mugdho");
    b.roll=65;
    b.marks=85.02;
    b.grade='A';

    printf("\nName  : %s\n",b.name);
    printf("Roll  : %d\n",b.roll);
    printf("Marks : %.02f\n",b.marks);
    printf("Grade : %c\n",b.grade);

    return 0;
}
