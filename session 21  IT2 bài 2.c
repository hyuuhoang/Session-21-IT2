#include <stdio.h>

int main() {
    FILE *inFile; 
    char firstChar;

    inFile = fopen("bt01.txt", "r");
    if (inFile == NULL) {
        printf("Khong the mo file da doc!\n");
        return 1;
    }


    firstChar = fgetc(inFile);

    if (firstChar != EOF) {
        printf("Ky tu dau tien trong file: %c\n", firstChar);
    } else {
        printf("File rong !\n");
    }

    fclose(inFile);

    return 0;
}

