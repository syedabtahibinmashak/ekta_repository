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

    int n;
    printf("Enter number of students : ");
    scanf("%d",&n);
    student arr[n];

    for(int i=0; i<n; i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("Name  : "); scanf("%s",&arr[i].name);
        printf("Roll  : "); scanf("%d",&arr[i].roll);
        printf("Marks : "); scanf("%f",&arr[i].marks);
        printf("Grade : "); scanf(" %c",&arr[i].grade);
    }
    for(int i=0; i<n; i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("Name  : %s\n",arr[i].name);
        printf("Roll  : %d\n",arr[i].roll);
        printf("Marks : %.02f\n",arr[i].marks);
        printf("Grade : %c\n",arr[i].grade);
    }

    return 0;
}
