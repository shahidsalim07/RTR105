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
            int i;
            int result = 1;
            for (i = 1; i <= num; i++) {
                result *= i;
                if (result / i != result) {
                    printf("Overflow occurred!\n");
                    return 0;
                }
            }
            printf("Result of %d! = %d\n", num, result);
            break;
        }
        case '2': {
            int i;
            char result = 1;
            for (i = 1; i <= num; i++) {
                result *= i;
                if ((char)(result / i) != result) {
                    printf("Overflow occurred!\n");
                    return 0;
                }
            }
            printf("Result of %d! = %d\n", num, result);
            break;
        }
        case '3': {
            int i;
            long long result = 1;
            for (i = 1; i <= num; i++) {
                result *= i;
                if (result / i != result) {
                    printf("Overflow occurred!\n");
                    return 0;
                }
            }
            printf("Result of %d! = %lld\n", num, result);
            break;
        }
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
