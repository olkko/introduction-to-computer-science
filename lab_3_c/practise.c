#include<stdio.h>
int main(){
    int m[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *p = &m;
    printf("%d\n", m);
    printf("%d\n", *p);
    *p = 1;
    printf("%d\n", *p);

}