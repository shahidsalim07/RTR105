#include <stdio.h>

void calculateAndPrintFactorial(char datatype, char num);

int main() {
    char datatype;
    char num;

    while (1) {
        printf("Enter a decimal number (or enter -1 to exit): ");
        scanf("%hhd", &num);

        if (num == -1) {
            printf("Exiting the program.\n");
            break;
        }

        while (getchar() != '\n');

        printf("Enter a datatype (1 for char, 2 for int, or 3 for long long): ");
        scanf(" %c", &datatype); 

        calculateAndPrintFactorial(datatype, num);
    }

    return 0;
}

void calculateAndPrintFactorial(char datatype, char num) {
    if (datatype == '1') {

        char result = 1;

        for (char i = 1; i <= num; i++) {
            result *= i;
            
            
            if (result < 0) {
                printf("Error: Factorial result exceeds the capacity of char datatype.\n");
                return;
            }

            printf("Intermediate result after multiplying by %d is: %d.\n", i, result);
        }

        printf("Factorial of the given number using char is: %d.\n", result);
    } else {
        // Handle other datatypes
        printf("Error: Factorial calculation is not implemented for the specified datatype.\n");
    }
}
