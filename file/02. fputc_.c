#include<stdio.h>
#include<string.h>
int main()
{
    FILE *f1;

    char arr[] = "Bongoboltu More Nai!";
    int l = strlen(arr);

    f1 = fopen("test.txt","w");

    if(f1==NULL)
    {
        printf("\nFile does not exist!\n");
    }
    else
    {
        printf("\nFile opened!\n");

        for(int i=0; i<l; i++)
        {
            fputc(arr[i],f1);
        }
        printf("\nFile written!\n");

        fclose(f1);
        printf("\nFile closed!\n");
    }

    return 0;
}

