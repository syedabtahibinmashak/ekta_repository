//
// You have to climb n stairs.
// You can climb only 1, 2, or 3 stairs at one step.
// In how many ways you can climb the stairs?
//
#include<stdio.h>
int func(int x)
{
    if((x==1)||(x==2)) return x;
    if(x==3) return 4;
    int ways=func(x-1)+func(x-2)+func(x-3);
    return ways;
}
int main()
{
    int n; printf("Enter number of stairs : "); scanf("%d",&n);
    int ans=func(n);
    printf("%d stairs can be climbed in %d ways",n,ans);
    return 0;
}
