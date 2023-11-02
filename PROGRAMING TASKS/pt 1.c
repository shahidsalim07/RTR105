#include <stdio.h>

int main() {
    unsigned long val1, val2, rezult;
    printf("First number: ");
    scanf("%lu", &val1);
    printf("Second number: ");
    scanf("%lu", &val2);
    rezult = val1 * val2;
    printf("Result: %lu\n", rezult);
    return 0;
}



