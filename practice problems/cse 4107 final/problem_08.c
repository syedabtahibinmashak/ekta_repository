#include<stdio.h>
void revprint(char* str)
{
    if(*str == '\0') return;
    revprint(str+1);
    printf("%c",*str);
    return;
}
int main()
{
    char arr[100]; printf("enter string : "); scanf("%s",arr);
    printf("\nreversed stirng : ");
    revprint(arr);
    return 0;
}