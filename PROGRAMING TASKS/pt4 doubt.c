#include <stdio.h>

int main() {
    int num;
    char choice;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Choose data type:\n");
    printf("1. int\n");
    printf("2. char\n");
    printf("3. long long\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf(" %c", &choice);

    switch (choice) {
        case '1': {
            int result_int = 1;
            int i_int;

            printf("Steps for calculating factorial using int:\n");
            for (i_int = 1; i_int <= num; ++i_int) {
                printf("i: %d, result: %d\n", i_int, result_int);
                result_int *= i_int;

                if (result_int < 0) {
                    printf("Overflow occurred for int at i = %d\n", i_int);
                    return 0;
                }
            }

            printf("Factorial of %d is: %d\n", num, result_int);
            break;
        }
        case '2': {
            char result_char = 1;
            int i_char;

            printf("Steps for calculating factorial using char:\n");
            for (i_char = 1; i_char <= num; ++i_char) {
                printf("i: %d, result: %d\n", i_char, result_char);
                result_char *= i_char;

                if (result_char < 0) {
                    printf("Overflow occurred for char at i = %d\n", i_char);
                    return 0;
                }
            }

            printf("Factorial of %d is: %d\n", num, result_char);
            break;
        }
        case '3': {
            long long result_ll = 1;
            int i_ll;

            printf("Steps for calculating factorial using long long:\n");
            for (i_ll = 1; i_ll <= num; ++i_ll) {
                printf("i: %d, result: %lld\n", i_ll, result_ll);
                result_ll *= i_ll;

                if (result_ll < 0) {
                    printf("Overflow occurred for long long at i = %d\n", i_ll);
                    return 0;
                }
            }

            printf("Factorial of %d is: %lld\n", num, result_ll);
            break;
        }
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
