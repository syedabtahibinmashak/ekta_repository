#include<stdio.h>
int power(int b, int p)
{
    if(p==0) return 1;
    int t=power(b,p/2);
    if(p%2==0) return t*t;
    else return t*t*b;
}
int main()
{
    int b; printf("Enter base : "); scanf("%d",&b);
    int p; printf("Enter power : "); scanf("%d",&p);
    int ans=power(b,p);
    printf("%d to the power %d is : %d",b,p,ans);
    return 0;
}
