#include <stdio.h>

int main() {
    char firstLine[1000];
    FILE *inFile;  

    inFile = fopen("bt01.txt", "r");
    if (inFile == NULL) {
        printf("Khong the mo file da doc !\n");
        return 1;
    }

    if (fgets(firstLine, sizeof(firstLine), inFile) != NULL) {
        printf("Dong dau tien ttrong file: %s", firstLine);
    } else {
        printf("File rong hoac khong o dong dau tien!\n");
    }

    fclose(inFile);

    return 0;
}

