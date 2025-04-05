#include<stdio.h>
int main()
{
    int r; printf("Enter Row : "); scanf("%d",&r);
    int c; printf("Enter Col : "); scanf("%d",&c);
    int mat[r][c]; printf("Enter the Elements :\n");
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) scanf("%d",&mat[i][j]);
    
    int n; printf("\nRotate How Many Times : "); scanf("%d",&n); n=n%(2*(r+c)-4);
    
    for(int i=0; i<n; i++)
    {
        int t1,t2;

        // dealing with top row
        t1=mat[0][c-1];
        for(int j=c-2; j>=0; j--)
        {
            mat[0][j+1]=mat[0][j];
        }
        
        // dealing with right col
        t2=mat[r-1][c-1];
        for(int j=r-2; j>=1; j--)
        {
            mat[j+1][c-1]=mat[j][c-1];
        }
        mat[1][c-1]=t1;
        
        // dealing with bottom row
        t1=mat[r-1][0];
        for(int j=1; j<=c-2; j++)
        {
            mat[r-1][j-1]=mat[r-1][j];
        }
        mat[r-1][c-2]=t2;
        
        // dealing with left col
        for(int j=1; j<=r-2; j++)
        {
            mat[j-1][0]=mat[j][0];
        }
        mat[r-2][0]=t1;
        
    }
    
    printf("\nAfter Rotating Peripheral Elements :\n");
    for(int i=0; i<r; i++) 
    {
        for(int j=0; j<c; j++) printf("%d ",mat[i][j]);
        printf("\n");
    }
    
    return 0;
}
