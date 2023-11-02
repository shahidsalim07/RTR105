#include <stdio.h>

int main() {
    unsigned long value1, value2, result;
    printf("Please enter the first number: ");
    scanf("%lu", &value1);  // Use the correct format specifier %lu for an unsigned long
    printf("Please enter the second number: ");
    scanf("%lu", &value2);  // Use the correct format specifier %lu for an unsigned long
    result = value1 * value2;  // Correct variable names
    printf("Result: %lu\n", result);  // Correct variable names and format specifier
    return 0;
}




