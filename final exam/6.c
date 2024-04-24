#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
    }

    for (int i = 0; i < n; i++) {
        char students[50];
        char course[50];

        printf("Enter students name: ");
        scanf("%s", students);

        printf("Enter course: ");
        scanf("%s", course);

        fprintf(file, "%s - %s\n", students, course);
    }

    fclose(file);

    printf("Data written to data.txt successfully!\n");

}
