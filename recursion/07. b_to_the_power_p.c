#include<stdio.h>
int power(int b, int p)
{
    if(p==1) return b;
    int fans=b*power(b,p-1);
    return fans;
}
int main()
{
    int b; printf("Enter base : "); scanf("%d",&b);
    int p; printf("Enter power : "); scanf("%d",&p);
    int ans=power(b,p);
    printf("%d to the power %d is : %d",b,p,ans);
    return 0;
}
