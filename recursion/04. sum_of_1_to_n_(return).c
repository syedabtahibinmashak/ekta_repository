#include<stdio.h>
int sum(int n)
{
    if(n==0) return;
    int fsum=n+sum(n-1);
    return fsum;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int ans = sum(n);
    printf("Sum of 1 to %d is : %d",n,ans);
    return 0;
}
