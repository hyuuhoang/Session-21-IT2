#include <stdio.h>

int main() {
    char inputString[1000]; 
    FILE *outFile; 

    outFile = fopen("bt01.txt", "a");
    if (outFile == NULL) {
        printf("Khong the mo file da ghi them!\n");
        return 1;
    }

    printf("Nhap mot chuoi bat ky da ghi them vao file: ");
    fgets(inputString, sizeof(inputString), stdin);

    fputs(inputString, outFile);

    fclose(outFile);

    printf("Ða ghi them chuoi vao file bt01.txt thanh cong !\n");
    return 0;
}

