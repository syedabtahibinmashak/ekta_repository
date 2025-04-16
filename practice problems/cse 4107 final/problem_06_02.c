#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* strCat(char p[], char q[])
{
    int s1=strlen(p), s2=strlen(q);
    char* crr=malloc(s1+s2+1);
    for(int i=0; i<s1; i++) crr[i]=p[i];
    for(int i=0; i<s2; i++) crr[s1+i]=q[i];
    crr[s1+s2]='\0';
    return crr;
}
int main()
{
    char arr[100]; printf("enter string a : "); scanf("%s",arr);
    char brr[100]; printf("enter string b : "); scanf("%s",brr);
    printf("\nconcatenated string : %s\n",strCat(arr,brr));
    return 0;
}