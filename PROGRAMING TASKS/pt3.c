#include <stdio.h>
#include <string.h>

int main() {
    int num1, num2, num3;

    printf("Enter the first decimal number: ");
    scanf("%d", &num1);

    printf("Enter the second decimal number: ");
    scanf("%d", &num2);

    printf("Enter the third decimal number: ");
    scanf("%d", &num3);

    char sortingOrder[10];
    printf("Enter the sorting order (ascending or descending): ");
    scanf("%s", sortingOrder);

    int temp;
    if (strcmp(sortingOrder, "ascending") == 0) {
        if (num1 > num2) {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }

        if (num1 > num3) {
            temp = num1;
            num1 = num3;
            num3 = temp;
        }

        if (num2 > num3) {
            temp = num2;
            num2 = num3;
            num3 = temp;
        }
    } else if (strcmp(sortingOrder, "descending") == 0) {
        // Sort in descending order
        if (num1 < num2) {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }

        if (num1 < num3) {
            temp = num1;
            num1 = num3;
            num3 = temp;
        }

        if (num2 < num3) {
            temp = num2;
            num2 = num3;
            num3 = temp;
        }
    } else {
        printf("Invalid sorting order. Please enter 'ascending' or 'descending'.\n");
        return 1;
    }

    // Print the sorted sequence
    printf("Sorted sequence: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
