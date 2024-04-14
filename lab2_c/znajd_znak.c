#include <stdio.h>

#define N 10

char *znajdz_znak(char *napis, char szuk_znak){
    for(char i=0;napis[i]!='\0';i++){
        if(napis[i]==szuk_znak){
            return &napis[i];
        }
    }
    return NULL;
}

int main(void){

    char tab[N];

    fgets(tab, N, stdin);

    char *ans=znajdz_znak(tab, 'k');

    if(ans==NULL){
        printf("Nie znaleziono szukanego znaku.");
    }
    else{
        printf("%c",*ans);
    }

    return 0;
}