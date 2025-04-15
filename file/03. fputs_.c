#include<stdio.h>
int main()
{
    FILE* f1;
    char brr[100];

    f1 = fopen("test.txt","a");

    if(f1==NULL)
    {
        printf("\nFile not found!\n");
    }
    else
    {
        printf("\nFile opened!\n");

        printf("\nEnter something : ");
        gets(brr);

        fputs("\n",f1);
        fputs(brr,f1);
        printf("\nFile written!\n");

        fclose(f1);
        printf("\nFile closed!\n");
    }

    return 0;
}
