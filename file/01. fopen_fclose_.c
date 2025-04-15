#include<stdio.h>
int main()
{
    FILE *f1;

    f1 = fopen("test.txt","a");

    if(f1==NULL)
    {
        printf("\nFile does not exist!\n");
    }
    else
    {
        printf("\nFile opened!\n");
        fclose(f1);
        printf("\nFile closed!\n");
    }

    return 0;
}
