#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int main() {

    FILE* fileIn;
    char str[MAX];
    char filePath[] = "";
    
    printf("enter file path: ");
    scanf("%s", filePath);

    fileIn = fopen(filePath, "r");

    printf("file content is: \n");

    while(fgets(str, 100, fileIn)){
        printf("%s", str);
    }    
    
    fclose(fileIn);

    return 0;
}