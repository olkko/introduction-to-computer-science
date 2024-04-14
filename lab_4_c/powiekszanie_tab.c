#include <stdio.h>
#include <stdlib.h>

double * add(double* tab, int n, double new_elem){

    double *new_tab =  calloc(n+1, sizeof (double));
    if (new_tab == NULL){
        return NULL;
    }
    else{
        for (int i; i < n; i++){
            new_tab[i] = tab[i];
        }
        new_tab[n] = new_elem;
        free(tab);
        return new_tab;
    }

}

int main(){
    double *p = NULL;
    for(int i = 0; i < 10; i++){ 
        p = add(p, i, i);
        if (p == NULL){
            printf("Blęd");
        }
        else{
            for(int j = 0; j <+i; j++){
                printf("%lf ", p[j]);
            }
            printf("\n");
        }
    }
    free(p);
    p = NULL;
}