#include <stdio.h>

int main()
{
    int r1; printf("\nEnter Row of Matrix 01: "); scanf("%d",&r1);
    int c1; printf("Enter Col of Matrix 01: "); scanf("%d",&c1);
    int m1[r1][c1]; printf("Enter Elements of Matrix 01:\n");
    for(int i=0; i<r1; i++) for(int j=0; j<c1; j++) scanf("%d",&m1[i][j]);

    int r2; printf("\nEnter Row of Matrix 02: "); scanf("%d",&r2);
    int c2; printf("Enter Col of Matrix 02: "); scanf("%d",&c2);
    int m2[r2][c2]; printf("Enter Elements of Matrix 02:\n");
    for(int i=0; i<r2; i++) for(int j=0; j<c2; j++) scanf("%d",&m2[i][j]);

    if(c1==r2)
    {
        int ans[r1][c2];
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                ans[i][j]=0;
                for(int k=0; k<c1; k++)
                {
                    ans[i][j]+=m1[i][k]*m2[k][j];
                }
            }
        }

        printf("\nMultiplied Matrix:\n");
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                printf("%d ",ans[i][j]);
            }
            printf("\n");
        }
    }
    else printf("Matrix Cannot be Multiplied!\n");

    return 0;
}
