#include <stdio.h>

int main() {
    unsigned long value1, value2, result;
    printf("First number: ");
    scanf("%lu", &value1);  // Use the correct format specifier %lu for unsigned long
    printf("Second number: ");
    scanf("%lu", &value2);  // Use the correct format specifier %lu for unsigned long
    result = value1 * value2;  // Correct variable names
    printf("Result: %lu\n", result);  // Correct variable names and format specifier
    return 0;
}





