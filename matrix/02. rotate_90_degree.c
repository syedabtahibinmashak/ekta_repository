#include<stdio.h>
int main()
{
    int r; printf("Enter Row : "); scanf("%d",&r);
    int c; printf("Enter Col : "); scanf("%d",&c);
    int mat[r][c]; printf("Enter the Elements :\n");
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) scanf("%d",&mat[i][j]);
    
    int tra[c][r];
    for(int i=0; i<c; i++) for(int j=0; j<r; j++) tra[i][j]=mat[j][i];
    
    printf("\n90 Degree Rotated Matrix :\n");
    for(int i=0; i<c; i++)
    {
        for(int j=r-1; j>=0; j--) printf("%d ",tra[i][j]);
        printf("\n");
    }
    return 0;
}
