#include<stdio.h>
int fibo(int a)
{
    if((a==1)||(a==2)) return 1;
    int fans=fibo(a-1)+fibo(a-2);
    return fans;
}
int main()
{
    int n;
    printf("Enter a number : "); 
    scanf("%d",&n);
    int ans=fibo(n);
    printf("%dth fibonacci number is : %d",n,ans);
    return 0;
}
