#include<stdio.h>
void sum(int n, int x)
{
    if(n==0)
    {
        printf("%d",x);
        return;
    }
    sum(n-1, x+n);
    return;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Sum of 1 to %d is : ",n);
    sum(n,0);
    return 0;
}
