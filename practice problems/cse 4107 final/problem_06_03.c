#include<stdio.h>
#include<string.h>
char* strStr(char big[], char sml[])
{
    int target=strlen(sml);
    int lendif=strlen(big)-target;
    for(int i=0; i<=lendif; i++)
    {
        int j=0;
        while(big[i+j]==sml[j]) j++;
        if(j==target) return &big[i];
    }
    return NULL;
}
int main()
{
    char bigstr[100]; printf("enter parent string  : "); scanf("%s",bigstr);
    char smlstr[100]; printf("enter child  string  : "); scanf("%s",smlstr);
    char* ans=strStr(bigstr,smlstr);
    if(ans==NULL) printf("\nnot found\n");
    else printf("\nfrom first occurance : %s\n",ans);
    return 0;
}