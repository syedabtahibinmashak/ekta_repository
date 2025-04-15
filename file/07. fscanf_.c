#include<stdio.h>
int main()
{
    FILE* f1;
    char fname[20],lname[20];
    int age;

    f1 = fopen("info.txt","r");

    if(f1==NULL)
    {
        printf("\nFile not found!\n");
    }
    else
    {
        printf("\nFile opened!\n\n");

        fscanf(f1,"%s %s %d",&fname,&lname,&age);
        printf("%s %s %d",fname,lname,age);

        fclose(f1);
        printf("\n\nFile closed!\n");
    }

    return 0;
}
