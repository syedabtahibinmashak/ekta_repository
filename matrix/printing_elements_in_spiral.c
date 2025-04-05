#include<stdio.h>
int main()
{
    int r; printf("Enter Row : "); scanf("%d",&r);
    int c; printf("Enter Col : "); scanf("%d",&c);
    int mat[r][c]; printf("Enter the Elements :\n");
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) scanf("%d",&mat[i][j]);
    int minr=0, maxr=r-1, minc=0, maxc=c-1, count=0, t=r*c;
    printf("\nElements in Spiral Order : ");
    while(1)
    {
        for(int i=minc; i<= maxc; i++)
        {
            printf("%d ",mat[minr][i]); count++;
        }
        minr++; if(count>=t) break;
        for(int i=minr; i<= maxr; i++)
        {
            printf("%d ",mat[i][maxc]); count++;
        }
        maxc--; if(count>=t) break;
        for(int i=maxc; i>= minc; i--)
        {
            printf("%d ",mat[maxr][i]); count++;
        }
        maxr--; if(count>=t) break;
        for(int i=maxr; i>= minr; i--)
        {
            printf("%d ",mat[i][minc]); count++;
        }
        minc++; if(count>=t) break;
    }
    return 0;
}
