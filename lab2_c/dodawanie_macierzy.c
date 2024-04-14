#include <stdio.h>
#define ROW 5 
#define COL 2
int main(){
    int tab1[ROW][COL] ={{1,2}, {3,4}, {5,6}, {7,8}} ;
    int tab2[ROW][COL] = {{8,7}, {6,5}, {4,3}, {2,1}} ;

int result[ROW][COL];
for (int i = 0; i < ROW; i++)
{
    for (int j = 0; j < COL; j++)
    {
        result[i][j] = tab1[i][j] + tab2[i][j];
        printf("%i", result[i][j]);
        
    }
    printf("\n");
}
}
