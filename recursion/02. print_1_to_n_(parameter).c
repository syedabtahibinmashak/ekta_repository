#include<stdio.h>
void fun(int n, int x)
{
    if(n==0) return;
    printf("%d\n",x);
    fun(n-1,x+1);
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    fun(n,1);
    return 0;
}
