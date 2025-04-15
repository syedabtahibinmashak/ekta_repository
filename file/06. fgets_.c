#include<stdio.h>
int main()
{
    FILE* f1;
    char arr[100];

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
            fgets(arr,100,f1);
            printf("%s",arr);
        }

        fclose(f1);
        printf("\n\nFile closed!\n");
    }

    return 0;
}

