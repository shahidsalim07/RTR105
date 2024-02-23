#include <stdio.h>

int main() {
    double factorial = 1.0;
    double result = 1.0;
    double number;
    char dataType;

    printf("Enter a decimal number: ");
    scanf("%lf", &number);

    printf("Choose data type - char (c), int (i), or long long (l): ");
    scanf(" %c", &dataType);

    switch(dataType) {
        case 'c':
            while (number > 0 && result <= factorial) {
                factorial *= number;
                result = factorial;
                number--;
            }
            break;
        case 'i':
            while (number > 0 && result <= factorial) {
                factorial *= number;
                result = factorial;
                number--;
            }
            break;
        case 'l':
            while (number > 0 && result <= factorial) {
                factorial *= number;
                result = factorial;
                number--;
            }
            break;
        default:
            printf("Invalid data type selected.\n");
            return 1;
    }

    if (result > factorial) {
        printf("Factorial value calculation with the selected data type is not possible.\n");
    } else {
        printf("Factorial of %.0lf is: %.0lf\n", number + 1, factorial);
    }

    return 0;
}
