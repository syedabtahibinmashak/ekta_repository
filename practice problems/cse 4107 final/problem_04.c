#include<stdio.h>
int main()
{
    int r; printf("number of rows : "); scanf("%d",&r);
    int c; printf("number of cols : "); scanf("%d",&c);
    int arr[r][c];
    printf("enter the array :\n");
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) scanf("%d",&arr[i][j]);
    printf("\ncount of odd numbers :\n");
    for(int i=0; i<r; i++)
    {
        int count=0;
        for(int j=0; j<c; j++) if(arr[i][j]%2) count++;
        printf("Row %d = %d\n",i+1,count);
    }
    return 0;
}