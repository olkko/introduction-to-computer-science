#include <stdio.h>
#include <stdlib.h>
#define W 3
#define K 4

float** createMatrix(int w, int k){
    float **tab_2D =  calloc(w, sizeof(float*));
   if(tab_2D==NULL){
        return NULL;
    }
 
    for (int i = 0; i < w;i++){
        tab_2D[i] = calloc(k, sizeof(float));
    
        if(tab_2D[i]==NULL){
            deleteMatrix(&tab_2D, i);
        }
    }
    return tab_2D;
}
void fillMatrix(float** tab_2D, int w, int k){
    int n = 1;
    for(int i = 0; i < w; i++){ 
        for(int j = 0; j < k; j++){
            tab_2D[i][j] = n;
            n++;
        }
    }
}

void printMatrix(float** tab_2D, int w, int k){
    for(int i = 0; i < w; i++){ 
        for(int j = 0; j < k; j++){
            printf("%lf\t", tab_2D[i][j]);
        }
        printf("\n");
    }
}

void deleteMatrix(float*** a_tab_2D, int w){
    for (int i = 0; i < w; i++) {
        free((*a_tab_2D)[i]);
        
    }
    free(*a_tab_2D);
    *a_tab_2D = NULL;
}

main(){
    float** tab = createMatrix(W, K);
    fillMatrix( tab, W, K);
    printMatrix( tab, W, K);
    deleteMatrix( &tab, W);
}