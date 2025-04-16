#include<stdio.h>
int main()
{
    FILE* self=fopen(__FILE__,"r");
    FILE* copy=fopen("self_copy.c","w");
    while(!feof(self))
    {
        char c=fgetc(self);
        fputc(c,copy);
    }
    fclose(self);
    fclose(copy);
    printf("self copy created successfully!");
    return 0;
}
