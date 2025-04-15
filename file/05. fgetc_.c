#include<stdio.h>
int main()
{
    FILE* f1;
    char ch;

    f1 = fopen("test.txt","r");

    if(f1==NULL)
    {
        printf("\nFile not found!\n");
    }
    else
    {
        printf("\nFile opened!\n\n");

        while(!feof(f1))
        {
            ch=fgetc(f1);
            printf("%c",ch);
        }

        fclose(f1);
        printf("\n\nFile closed!\n");
    }

    return 0;
}
