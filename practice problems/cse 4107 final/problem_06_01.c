#include<stdio.h>
int strLen(char arr[])
{
    int count=0; 
    for(int i=0; arr[i]!='\0'; i++) count++;
    return count;
}
int main()
{
    char str[100]; printf("enter string : "); scanf("%s",str);
    printf("length = %d\n",strLen(str));
    return 0;
}