#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
FILE *inputFile, *outputFile;
inputFile = fopen("input.txt", "rb");
if (inputFile == NULL) {
printf("Error opening input file.");
return 1;
}

fseek(inputFile, 0, SEEK_END);
int fileLength = ftell(inputFile);
rewind(inputFile);

char *fileContents = (char *)malloc(fileLength * sizeof(char));
if (fileContents == NULL) {
printf("Error allocating memory for file contents.");
return 1;
}

fread(fileContents, sizeof(char), fileLength, inputFile);
fclose(inputFile);

outputFile = fopen("output.txt", "wb");
if (outputFile == NULL) {
printf("Error opening output file.");
return 1;
}

fwrite(fileContents, sizeof(char), fileLength, outputFile);
fwrite(fileContents, sizeof(char), fileLength, outputFile);
fwrite(fileContents, sizeof(char), fileLength, outputFile);

memset(fileContents, 'A', fileLength);

fseek(outputFile, fileLength, SEEK_SET);

fwrite(fileContents, sizeof(char), fileLength, outputFile);

free(fileContents);
fclose(outputFile);
return 0;
}