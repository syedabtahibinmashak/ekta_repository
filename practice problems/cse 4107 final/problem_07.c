#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool check(char arr[], int s, int e)
{
    if(s>=e) return true;
    if(arr[s]!=arr[e]) return false;
    return check(arr,s+1,e-1);
}
int main()
{
    char str[100]; printf("enter string : "); scanf("%s",str);
    bool ans=check(str,0,strlen(str)-1);
    if(ans) printf("\npalindrome\n");
    else printf("\nnot palindrome\n");
    return 0;
}