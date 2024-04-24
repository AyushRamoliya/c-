#include <stdio.h>
#include <string.h>

struct Car{
    char model[50];
    char year[50];
    int price;
};

void main() {
    int n;

    printf("Enter the number of car: ");
    scanf("%d", &n);

    struct Car cars[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for car %d:\n", i + 1);
        printf("model: ");
        scanf("%s", cars[i].model);
        printf("year: ");
        scanf("%s", cars[i].year);
        printf("Price: ");
        scanf("%d", &cars[i].price);
    }

    printf("\ncar Details:\n");
    for (int i = 0; i < n; i++) {
        printf("car %d:\n", i + 1);
        printf("model: %s\n", cars[i].model);
        printf("year: %s\n", cars[i].year);
        printf("Price: %d\n", cars[i].price);
        printf("\n");
}

}
