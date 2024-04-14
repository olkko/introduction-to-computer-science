#include <stdio.h>

double iloczyn( double A[], double B[], int rozmiar){
    double result = 0;
    for (int i = 0; i < rozmiar; i++)
    {
        result += A[i] * B[i];

    }
    return result;
}
main(){
    double tab1[5]={1.0,2.0,3.0,4.0,5.0};
    double tab2[5] = {6.0, 7.0, 8.0, 9.0, 10.0};
    double tab3[3] = {0.0, 2.0, 3.0};
    double tab4[3] = {0.0, 7.0, 0.0};
    printf("%.2lf\n", iloczyn(tab1, tab2, 5));
    printf("%.2lf\n", iloczyn(tab3, tab4, 3));
}