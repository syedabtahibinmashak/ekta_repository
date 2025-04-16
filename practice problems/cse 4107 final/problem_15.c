#include<stdio.h>
int main()
{
    char source[100]; printf("enter source path : "); scanf("%s",source);
    int copy; printf("how many copies : "); scanf("%d",&copy);

    for(int i=0; i<copy; i++)
    {
        FILE* f1=fopen(source,"r");
        char name[100];
        sprintf(name,"copy_%d.txt",i+1);
        FILE* f2=fopen(name,"w");
        while(!feof(f1))
        {
            char ch=fgetc(f1);
            fputc(ch,f2);
        }
        fclose(f1);
        fclose(f2);
    }
    return 0;
}
