#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int znajdz_znak(int argc, char* argv[]) {
znajdz_znak

    int i;
    for (i = 0; i < strlen(input); i++) {
        input[i] = tolower(input[i]);
    }
    for (i = 0; i < 3; i++) {
        if (strcmp(arr[i], input) == 0) {
            printf("Found input string at index %d\n", i);
            break;
        }
    }
    if (i >= 3) {
        return NULL;
    }
    printf("Value of i is %d\n", i);
    return 0;
}
int main(){
    char znak;
    char arr[3][100] = {"apple", "orange", "programmer"};
    char input[100];

    printf("Input a word: ");
    znak = fgets(input, 100, stdin);
    input[strlen(input) - 1] = 0; 
    znajdz_znak(znak) 
}
