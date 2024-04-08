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
            int i = 1;
            int result = 1;
            int prev_result;
            while (i <= num) {
                prev_result = result;
                result *= i;
                if (result / i != prev_result) {
                    printf("Overflow occurred!\n");
                    return 0;
                }
                printf("Result of %d! = %d\n", i, result);
                i++;
            }
            break;
        }
        case '2': {
            int i = 1;
            char result = 1;
            char prev_result;
            while (i <= num) {
                prev_result = result;
                result *= i;
                if ((char)(result / i) != (char)prev_result) {
                    printf("Overflow occurred!\n");
                    return 0;
                }
                printf("Result of %d! = %d\n", i, result);
                i++;
            }
            break;
        }
        case '3': {
            int i = 1;
            long long result = 1;
            long long prev_result;
            while (i <= num) {
                prev_result = result;
                result *= i;
                if (result / i != prev_result) {
                    printf("Overflow occurred!\n");
                    return 0;
                }
                printf("Result of %d! = %lld\n", i, result);
                i++;
            }
            break;
        }
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
