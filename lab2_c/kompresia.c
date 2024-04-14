#include <stdio.h>
#include <stdlib.h>

int*compress(double**a_table, int*a_size){

    int length=0;

    for(double*i=*a_table;i<(*a_table+*a_size);i++){
        if(*i!=0){
            length++;
        }
    }

    double*new_table=calloc(length,sizeof(double));
    int*index_table=calloc(length,sizeof(int));

    if(new_table==NULL || index_table==NULL){
        free(new_table);
        free(index_table);
        return NULL;
    }

    int j=0;

    for(int i=0;i<*a_size;i++){
        if((*a_table)[i]!=0){
            new_table[j]=(*a_table)[i];
            index_table[j]=i;
            j++;
        }
    }

    *a_size=length;

    *a_table=new_table;

    return index_table;
}


int main(){

    int size=10;

    double*tab=calloc(size,sizeof(double));
    if(tab==NULL){
        return NULL;
    }

    tab[2]=3.0, tab[5]=1.0, tab[8]=7.0;

    int*index_tab = compress(&tab, &size);

    for(int i=0;i<size;i++){
        printf("%lf ",tab[i]);
    }

    printf("\n");

    for(int i=0;i<size;i++){
        printf("%i ",index_tab[i]);
    }

    free(tab);
    free(index_tab);

    return 0;
}