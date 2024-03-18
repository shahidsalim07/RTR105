#include <stdio.h>
#include <limits.h>

void calculateFactorial(int num, char type) {
    if (type == 'i') {
        int result = 1;
        for (int i = 1; i <= num; ++i) {
            if (result > INT_MAX / i) {
                printf("Overflow occurred at %d!\n", i);
                break;
            }
            result *= i;
            printf("Factorial of %d is %d\n", i, result);
        }
    } else if (type == 'c') {
        char result = 1;
        for (int i = 1; i <= num; ++i) {
            result *= i;
            printf("Factorial of %d is %d\n", i, result);
            if (result < 0) {
                printf("Overflow occurred at %d!\n", i);
                break;
            }
        }
    } else if (type == 'l') {
        long long result = 1;
        for (int i = 1; i <= num; ++i) {
            result *= i;
            printf("Factorial of %d is %lld\n", i, result);
            if (result < 0) {
                printf("Overflow occurred at %d!\n", i);
                break;
            }
        }
    } else {
        printf("Invalid data type selected!\n");
    }
}

int main() {
    int number;
    char datatype;

    printf("Enter a number to find factorial: ");
    scanf("%d", &number);

    printf("Choose data type - 'i' for int, 'c' for char, 'l' for long long: ");
    scanf(" %c", &datatype);

    calculateFactorial(number, datatype);

    return 0;
}
