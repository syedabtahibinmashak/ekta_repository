#include<stdio.h>
int main()
{
    FILE* f1;
    f1= fopen("problem_19.txt","r");
    int sum,n1,n2,n3,n4;
    while(!feof(f1))
    {
        fscanf(f1,"%d-%d-%d-%d",&n1,&n2,&n3,&n4);
        sum=n1+n2+n3+n4;
        printf("%d\n",sum);
    }
    fclose(f1);
}
