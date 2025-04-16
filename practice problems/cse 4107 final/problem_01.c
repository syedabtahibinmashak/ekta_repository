#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void func(char name[][100], int n)
{
    printf("\nvalid names :\n");
    for(int i=0; i<n; i++)
    {
        bool flag = true;
        for(int j=0; name[i][j]!='\0'; j++)
        {
            char c = name[i][j];
            if(!((c<='z' && c>='a')||(c<='Z' && c>='A')))
            {
                flag = false; break;
            }
        }
        if(flag==true) printf("%s\n",name[i]);
    }
}
int main()
{
    int n; printf("number of strings : "); scanf("%d",&n);
    char arr[n][100]; printf("enter the strings :\n");
    for(int i=0; i<n; i++) scanf("%s",&arr[i]);
    func(arr,n);
    return 0;
}