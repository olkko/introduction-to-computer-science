#include <stdio.h>
 
#define ROW1 3
#define COL1 2

#define ROW2 2   
#define COL2 3

int main()
{
    double tab1[ROW1][COL1]={
      {1,1},
      {2,2},
      {3,3}
    };
    
    double tab2[ROW2][COL2]={
      {1,1,1},
      {2,2,2}
    };
    
    double ans[ROW1][COL2];
    
    for(int i=0;i<ROW1;i++)
    {
        for(int j=0;j<COL2;j++)
        {
            for(int k=0;k<COL1;k++)
            {
                ans[i][j]+=(tab1[i][k]*tab2[k][j]);
            }
        }
    }
    
    for(int i=0;i<ROW1;i++)
    {
        for(int j=0;j<COL2;j++)
        {
            printf("%.1f\t",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}