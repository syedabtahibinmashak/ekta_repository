// input ===> output
// 1     ===> 111
// 2     ===> 211121112
// 3     ===> 321112111232111211123
// 4     ===> 432111211123211121112343211121112321112111234
#include<stdio.h>
void PreInPost(int n)
{
    if(n==0) return ;
    printf("%d",n);
    PreInPost(n-1);
    printf("%d",n);
    PreInPost(n-1);
    printf("%d",n);
}
int main()
{
    int n; printf("Enter n : "); scanf("%d",&n);
    PreInPost(n);
    return 0;
}
