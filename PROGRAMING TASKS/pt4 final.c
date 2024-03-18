#include <stdio.h>

void calculateFactorial(int num, char type) {
    if (type == 'i') {
        int result = 1;
        for (int i = 1; i <= num; i++) {
            if (result * i < result) {
                printf("Overflow occurred at %d!\n", i);
                return;
            }
            result *= i;
            printf("Factorial at %d: %d\n", i, result);
        }
    } else if (type == 'c') {
        char result = 1;
        for (int i = 1; i <= num; i++) {
            if (result * i < result) {
                printf("Overflow occurred at %d!\n", i);
                return;
            }
            result *= i;
            printf("Factorial at %d: %d\n", i, result);
        }
    } else if (type == 'l') {
        long long result = 1;
        for (int i = 1; i <= num; i++) {
            if (result * i < result) {
                printf("Overflow occurred at %d!\n", i);
                return;
            }
            result *= i;
            printf("Factorial at %d: %lld\n", i, result);
        }
    } else {
        printf("Invalid data type!\n");
    }
}

int main() {
    int number;
    char datatype;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter data type ('i' for int, 'c' for char, 'l' for long long): ");
    scanf(" %c", &datatype);

    calculateFactorial(number, datatype);

    return 0;
}
