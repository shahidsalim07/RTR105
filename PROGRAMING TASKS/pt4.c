#include <stdio.h>

void calculateAndPrintFactorial(int datatype, int num);

int main() {
    int datatype;
    int num;

    while (1) {
        printf("Enter a decimal number (or enter -1 to exit): ");
        scanf("%d", &num);

        if (num == -1) {
            printf("Exiting the program.\n");
            break;
        }

        while (getchar() != '\n');

        printf("Enter a datatype (1 for char, 2 for int, or 3 for long long): ");
        scanf("%d", &datatype);

        calculateAndPrintFactorial(datatype, num);
    }

    return 0;
}

void calculateAndPrintFactorial(int datatype, int num) {
    if (datatype == 1) {
        // Handle char datatype
        printf("Factorial is not defined for characters.\n");
    } else {
        // Handle long long datatype
        long long result = 1;

        for (int i = 1; i <= num; i++) {
            result *= i;
        }

        printf("Factorial of the given number using long long is: %lld.\n", result);
    }
}
