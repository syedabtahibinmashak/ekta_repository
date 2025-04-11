#include<stdio.h>
int factorial(int n)
{
    if(n==0) return 1;
    int fans=n*factorial(n-1);
    return fans;
}
int main()
{
    int n; printf("Enter a number : "); scanf("%d",&n);
    int ans = factorial(n);
    printf("%d factorial is : %d",n,ans);
    return 0;
}
