#include<stdio.h>
int main()
{
    int r; printf("Enter Row : "); scanf("%d",&r);
    int c; printf("Enter Col : "); scanf("%d",&c);
    int arr[r][c]; printf("Enter the Elements :\n");
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) scanf("%d",&arr[i][j]);
    
    printf("\nElements in Row-Wave Order : ");
    for(int i=0; i<r; i++)
    {
        if(i%2==0) for(int j=0; j<c; j++) printf("%d ",arr[i][j]);
        else for(int j=c-1; j>=0; j--) printf("%d ",arr[i][j]);
    }
    
    printf("\nElements in Col-Wave Order : ");
    for(int i=0; i<c; i++)
    {
        if(i%2==0) for(int j=0; j<r; j++) printf("%d ",arr[j][i]);
        else for(int j=r-1; j>=0; j--) printf("%d ",arr[j][i]);
    }
    return 0;
}
