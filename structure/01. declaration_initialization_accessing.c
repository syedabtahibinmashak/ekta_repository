#include<stdio.h>
#include<string.h>

int main()
{
    struct student
    {
        char name[50];
        int roll;
        float marks;
        char grade;
    } a;

    struct student c,d;

    strcpy(a.name, "Zulfiqar Ali");
    a.roll=27;
    a.marks=85.45;
    a.grade='A';

    struct student b={"Khalid Mahmud", 37, 59.55, 'C'};
    
    strcpy(c.name, "Rushdul Hamid");
    c.roll=45;
    c.marks=78.20;
    c.grade='B';

    strcpy(d.name, "Yakub Abbasi");
    d.roll=23;
    d.marks=98.44;
    d.grade='A';

    printf("\nName  : %s\n",a.name);
    printf("Roll  : %d\n",a.roll);
    printf("Marks : %.02f\n",a.marks);
    printf("Grade : %c\n",a.grade);

    printf("\nName  : %s\n",b.name);
    printf("Roll  : %d\n",b.roll);
    printf("Marks : %.02f\n",b.marks);
    printf("Grade : %c\n",b.grade);

    printf("\nName  : %s\n",c.name);
    printf("Roll  : %d\n",c.roll);
    printf("Marks : %.02f\n",c.marks);
    printf("Grade : %c\n",c.grade);

    printf("\nName  : %s\n",d.name);
    printf("Roll  : %d\n",d.roll);
    printf("Marks : %.02f\n",d.marks);
    printf("Grade : %c\n",d.grade);

    return 0;
}
