#include<stdio.h>
#include <stdlib.h>
#define R 100

int main(){

    FILE *fp, *fo;

    fp = fopen("input.txt","r");
    fo = fopen("output.txt","w");
    if(fp == NULL || fo == NULL){
        if (fp != NULL){
            fclose(fp);
        }
        if (fo != NULL){
            fclose(fo);
        }
        printf("Error!");
        exit (1);
    }
    int c;
    while ((c = fgetc(fp)) != EOF){
            fputc(c, fo);
    }
    rewind(fp);
    char table[R];
    while ( fgets(table, R, fp) != NULL){
            fputs(table, fo);
    }
    fclose(fp);
    fclose(fo);
}
