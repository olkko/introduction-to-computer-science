#include<stdio.h>
#define N 10
/*
char *znajdz_znak(char *napis, char szuk_znak){
    for (char *i = napis; i != napis + N; i++){
        if (*i == szuk_znak){
            return i;
        }
        else{
            return NULL;
        }
    }
}*/
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
        char *t = fgets(tab, N, stdin);
        char *result = znajdz_znak(t, 'm');
        if (result == NULL){
            printf("Niema takiego znaku! ");
        }
        else{
            printf("%c", *result);
        }
    return 0;

}
