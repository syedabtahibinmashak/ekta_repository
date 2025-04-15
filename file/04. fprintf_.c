#include<stdio.h>
int main()
{
    FILE* f1;
    char name[100];
    int age;

    f1 = fopen("test.txt","a");

    if(f1==NULL)
    {
        printf("\nFile not found!\n");
    }
    else
    {
        printf("\nFile opened!\n");

        printf("\nEnter your name : "); gets(name);
        printf("Enter your age : "); scanf("%d",&age);

        fprintf(f1,"\nName = %s, Age = %d",name,age);
        printf("\nFile written!\n");

        fclose(f1);
        printf("\nFile closed!\n");
    }

    return 0;
}
