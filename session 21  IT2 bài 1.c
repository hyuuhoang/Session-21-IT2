#include <stdio.h>

int main() {
    char inputString[1000];
    FILE *outFile; 

    outFile = fopen("bt01.txt", "w");
    if (outFile == NULL) {
        printf("Khong the mo file da ghi !\n");
        return 1;
    }

    printf("Nhap mot chuoi bat ky : ");
    fgets(inputString, sizeof(inputString), stdin); 

    fputs(inputString, outFile);

    fclose(outFile);

    printf("da ghi chuoi vao  file bt01.txt thanh cong !\n");
    return 0;
}

