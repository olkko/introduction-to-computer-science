#include <stdio.h>
#include <stdlib.h>

int * compress(double ** a_table, int *a_size){
    float non_zero_tab = 0;
    for (int i = 0; i < *a_size; i++){
        if ((*a_table)[i] != 0){
            non_zero_tab += 1;
        }  
    }
    int *non_zero = calloc(non_zero_tab, sizeof(int));
    double *new_tab = calloc(non_zero_tab, sizeof(double));
    int n = 0;
    for (int i = 0; i < a_size; i++){
        if ((*a_table)[i] != 0){
            non_zero[n] = i;
            new_tab[n] = 
            n++;
        }
    }
}

main(){
    float tab[10] = {0};
    tab[2]=3.0, tab[5]=1.0, tab[8]=7.0;
    frintf('%f',tab);
    compress(tab, 10);
    printf(non_zero);
    printf();
}