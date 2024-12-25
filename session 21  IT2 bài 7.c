#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int id;     
    char name[100]; 
    int age; 
} Student;

int main() {
    int numStudents; 
    Student *students; 
    FILE *file; 


    printf("Nhap va su ly sinh vien: ");
    scanf("%d", &numStudents);
    getchar(); 
    

    students = (Student *)malloc(numStudents * sizeof(Student));
    if (students == NULL) {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    for (int i = 0; i < numStudents; i++) {
        printf("\n nhap thong tin cho sinh vien  %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        getchar();
        printf("Tên: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);


        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        printf("Tu?i: ");
        scanf("%d", &students[i].age);
        getchar();
    }

    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file da ghi!\n");
        free(students);
        return 1;
    }

    for (int i = 0; i < numStudents; i++) {
        fprintf(file, "%d, %s, %d\n", students[i].id, students[i].name, students[i].age);
    }

    fclose(file);
    free(students);

    printf("\n thong tin sinh vien da duoc luu vao file students.txt\n");
    return 0;
}

