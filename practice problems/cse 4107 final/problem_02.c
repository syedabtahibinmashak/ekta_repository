#include <stdio.h>
#include<string.h>
int main()
{
    int n; printf("number of strings : "); scanf("%d",&n);
    char arr[n][100]; printf("enter the strings :\n");
    for(int i=0; i<n; i++) scanf("%s",&arr[i]);
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(strlen(arr[i])>strlen(arr[j]))
            {
                char temp[100];
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
            }
        }
    }
    printf("\nlength sorted strings :\n");
    for(int i=0; i<n; i++) printf("%s\n",arr[i]);
    return 0;
}