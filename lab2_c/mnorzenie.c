#include <stdio.h>
#define ROW1 5 
#define COL1 2
#define ROW2 5 
#define COL2 2
double main()
{
    int tab1[ROW1][COL1] = {{1, 2}, {3, 4}};
    int tab2[ROW2][COL2] = {{4, 3}, {2, 1}};
    int result[ROW1][COL2];

for (int i = 0; i < ROW1; i++)
{
    for (int j = 0; j < COL2; j++)
    {
        for (int k = 0; k < COL1; k++){
        result[i][j] += (tab1[i][k] * tab2[i][j]);
        }
    }
}
for (int i = 0; i < ROW1; i++)
{
    for (int j = 0; j < COL2; j++)
    {
        for (int k = 0; k < COL1; k++){
            printf
}