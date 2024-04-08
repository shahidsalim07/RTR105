#include <stdio.h>

unsigned long long factorial_ulonglong(int num) {
    unsigned long long result = 1;
    unsigned long long prevResult = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
        if (result < prevResult) {
            printf("Overflow! Factorial of %d is out of range for unsigned long long data type.\n", num);
            break;
        }
        prevResult = result;
    }
    return result;
}

long long factorial_longlong(int num) {
    long long result = 1;
    long long prevResult = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
        if (result < prevResult) {
            printf("Overflow! Factorial of %d is out of range for long long data type.\n", num);
            break;
        }
        prevResult = result;
    }
    return result;
}

int factorial_int(int num) {
    int result = 1;
    int prevResult = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
        if (result < prevResult) {
            printf("Overflow! Factorial of %d is out of range for int data type.\n", num);
            break;
        }
        prevResult = result;
    }
    return result;
}

char factorial_char(int num) {
    char result = 1;
    char prevResult = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
        if (result < prevResult) {
            printf("Overflow! Factorial of %d is out of range for char data type.\n", num);
            break;
        }
        prevResult = result;
    }
    return result;
}

int main() {
    int num;
    char choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Choose datatype for factorial calculation:\n");
    printf("1. char\n2. int\n3. long long\n");
    scanf(" %c", &choice);

    switch (choice) {
        case '1':
            printf("Factorial of %d = %d\n", num, factorial_char(num));
            break;
        case '2':
            printf("Factorial of %d = %d\n", num, factorial_int(num));
            break;
        case '3':
            printf("Factorial of %d = %lld\n", num, factorial_longlong(num));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
