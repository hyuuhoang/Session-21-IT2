#include <stdio.h>

int main() {
    char line[1000]; 
    int numLines;
    FILE *file;


    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file da ghi!\n");
        return 1;
    }

    printf("Nhap so dong can ghi vao file: ");
    scanf("%d", &numLines);
    getchar();

    for (int i = 0; i < numLines; i++) {
        printf("Nhap noi dung dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fputs(line, file);       
    }

    fclose(file);

    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file da doc!\n");
        return 1;
    }

    printf("\n noi dung file bt05.txt:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}

