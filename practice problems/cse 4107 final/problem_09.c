#include<stdio.h>
int digisum(int num)
{
    if(num==0) return 0;
    return (num%10)+digisum(num/10);
}
int main()
{
    int n; printf("enter a number : "); scanf("%d",&n);
    printf("\nsum of the digits = %d\n",digisum(n));
    return 0;
}