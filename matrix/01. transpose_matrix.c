#include<stdio.h>
int main()
{
    int r; printf("Enter Row : "); scanf("%d",&r);
    int c; printf("Enter Col : "); scanf("%d",&c);
    int mat[r][c]; printf("Enter the Elements :\n");
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) scanf("%d",&mat[i][j]);
    
    printf("\nTranspose Matrix :\n");
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++) printf("%d ",mat[j][i]);
        printf("\n");
    }
    return 0;
}
