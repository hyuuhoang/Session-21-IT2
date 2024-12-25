#include <stdio.h>

int main() {
    char buffer[1000]; 
    FILE *sourceFile; 
    FILE *destFile; 
    
    sourceFile = fopen("bt01.txt", "r");
    if (sourceFile == NULL) {
        printf("khong the mo file bt01.txt da doc!\n");
        return 1;
    }

    destFile = fopen("bt06.txt", "w");
    if (destFile == NULL) {
        printf("Khong the mo file bt06.txt da ghi!\n");
        fclose(sourceFile);
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), sourceFile) != NULL) {
        fputs(buffer, destFile);
    }

    fclose(sourceFile);
    fclose(destFile);

    printf("Sao chep noi dung tu bt01.txt sang bt06.txt thanh cong!\n");
    return 0;
}

