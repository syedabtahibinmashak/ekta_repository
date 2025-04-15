#include<stdio.h>
int main()
{
    FILE* f1;

    f1 = fopen("student.txt","a");

    if(f1==NULL)
    {
        printf("\nFile not found!\n");
    }
    else
    {
        printf("\nFile opened!\n");

        char name[20],grade;
        int roll,n;
        float gpa;

        printf("\nEnter number of students : "); scanf("%d",&n);

        for(int i=1; i<=n; i++)
        {
            printf("\nStudent (%d) Name : ",i); scanf("%s",&name);
            printf("Student (%d) Roll : ",i); scanf("%d",&roll);
            printf("Student (%d) GPA : ",i); scanf("%f",&gpa);
            printf("Student (%d) Grade : ",i); scanf(" %c",&grade);

            fprintf(f1,"\nName: %s - Roll: %d - GPA: %.02f - Grade: %c",name,roll,gpa,grade);
        }

        fclose(f1);
        printf("\nFile closed!\n");
    }

    return 0;
}
