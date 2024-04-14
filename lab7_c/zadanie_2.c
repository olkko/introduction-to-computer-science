#include<stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp, *fo;

    fp = fopen("input.txt","rb");
        if(fp == NULL){
        printf("Error!");
        exit (1);
    }

    long int ftell(fp);
    int fseek(fp, long int offset, int origin);
}