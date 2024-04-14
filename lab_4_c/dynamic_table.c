//skonczone
#include <stdio.h>
#include <stdlib.h>



int *dyn_tab(int rozmiar){
int *n = calloc( sizeof(rozmiar), sizeof(int));

if (n==NULL){
    return NULL;
}
else{
    for (int i = 0; i < rozmiar; i++){
        n[i] = 1 + 2 * i;
    }
    return n;
}
}

int main(){
    int rozmiar;
    int *tab;
    int i;
    printf("Podaj rozmiar : ");
    scanf("%i", &rozmiar);
    tab = dyn_tab(rozmiar);
    for (i = 0; i < rozmiar; i++){
        printf("%d \n", *(tab+i));
    }
    free(tab);
    tab = NULL;
}