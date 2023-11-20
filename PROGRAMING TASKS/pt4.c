#include <stdio.h>

int main() {
    // Declare variables
    int number;
    char dataType;
    long long factorial;

    // Ask the user to enter a decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &number);

    // Ask the user to select the data type (char, int, or long long)
    printf("Select the data type to use (char, int, or long long): ");
    scanf(" %c", &dataType);

    // Calculate the factorial based on the selected data type
    if (dataType == 'c') {
        // Use the `char` data type
        for (factorial = 1; factorial <= number; factorial++) {
            if (factorial > (char) 127) {
                printf("Cannot calculate the factorial of %d using 'char' data type.\n", number);
                return 1;
            }
        }
        printf("Factorial of %d using 'char' data type: %lld\n", number, factorial);
    } else if (dataType == 'i') {
        // Use the `int` data type
        for (factorial = 1; factorial <= number; factorial++) {
            if (factorial > (int) 32767) {
                printf("Cannot calculate the factorial of %d using 'int' data type.\n", number);
                return 1;
            }
        }
        printf("Factorial of %d using 'int' data type: %lld\n", number, factorial);
    } else if (dataType == 'l') {
        // Use the `long long` data type
        for (factorial = 1; factorial <= number; factorial++) {
            if (factorial > (long long) 9223372036854775807) {
                printf("Cannot calculate the factorial of %d using 'long long' data type.\n", number);
                return 1;
            }
        }
        printf("Factorial of %d using 'long long' data type: %lld\n", number, factorial);
    } else {
        printf("Invalid data type selection. Please enter 'c', 'i', or 'l'.\n");
        return 1;
    }

    return 0;
}
