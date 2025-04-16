#include <stdio.h>
int main()
{
    int n; printf("number of strings : "); scanf("%d",&n);
    char arr[n][100]; printf("enter the strings :\n");
    for(int i=0; i<n; i++) scanf("%s",&arr[i]);
    printf("\nstrings with lower ascii sum :\n");
    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=0; arr[i][j]!='\0'; j++)
        {
            char c = arr[i][j];
            if(c<='z' && c>='a') sum += c;
        }
        printf("%s = %d\n",arr[i],sum);
    }
    return 0;
}