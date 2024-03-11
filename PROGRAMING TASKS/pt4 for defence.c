#include <stdio.h>

void calculateAndPrintFactorial(char datatype, void *num);

int main() {
    char datatype;
    char num_char;
    int num_int;
    long long num_longlong;

    while (1) {
        printf("Enter a decimal number (or enter -1 to exit): ");
        
        // Assuming the user inputs integers for all datatypes
        if (scanf("%hhd", &num_char) == 1) {
            if (num_char == -1) {
                printf("Exiting the program.\n");
                break;
            }
            
            while (getchar() != '\n');

            printf("Enter a datatype (1 for char, 2 for int, or 3 for long long): ");
            scanf(" %c", &datatype);

            switch (datatype) {
                case '1':
                    calculateAndPrintFactorial(datatype, &num_char);
                    break;
                case '2':
                    calculateAndPrintFactorial(datatype, &num_char);
                    break;
                case '3':
                    calculateAndPrintFactorial(datatype, &num_char);
                    break;
                default:
                    printf("Error: Invalid datatype.\n");
            }
        } else {
            printf("Error: Invalid input.\n");
            break;
        }
    }

    return 0;
}

void calculateAndPrintFactorial(char datatype, void *num) {
    if (datatype == '1') {
        char result = 1;
        char previousResult = 1;

        for (char i = 1; i <= *((char*)num); i++) {
            result = previousResult * i;

            // Check for overflow
            if (result < previousResult) {
                printf("Error: Factorial calculation overflowed for the given datatype.\n");
                return;
            }

            previousResult = result;
            printf("result after multiplying by %d is: %d.\n", i, result);
        }

        printf("Factorial of the given number using char is: %d.\n", result);
    } else if (datatype == '2') {
        int result = 1;
        int previousResult = 1;

        for (int i = 1; i <= *((int*)num); i++) {
            result = previousResult * i;

            // Check for overflow
            if (result < previousResult) {
                printf("Error: Factorial calculation overflowed for the given datatype.\n");
                return;
            }

            previousResult = result;
            printf("result after multiplying by %d is: %d.\n", i, result);
        }

        printf("Factorial of the given number using int is: %d.\n", result);
    } else if (datatype == '3') {
        long long result = 1;
        long long previousResult = 1;

        for (long long i = 1; i <= *((long long*)num); i++) {
            result = previousResult * i;

            // Check for overflow
            if (result < previousResult) {
                printf("Error: Factorial calculation overflowed for the given datatype.\n");
                return;
            }

            previousResult = result;
            printf("result after multiplying by %lld is: %lld.\n", i, result);
        }

        printf("Factorial of the given number using long long is: %lld.\n", result);
    } else {
        printf("Error: Factorial calculation is not implemented for the specified datatype.\n");
    }
}
