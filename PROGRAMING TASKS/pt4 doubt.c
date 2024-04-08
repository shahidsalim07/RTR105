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
    scanf(" %c", &choice); // Notice the space before %c to consume the newline character
    
    switch (choice) {
        case '1': {
            int result = 1;
            int i = 1;

            while (1) {
                // Print current iteration and result
                printf("i: %d, result: %d\n", i, result);
                
                // Check if the next multiplication will cause overflow
                if (result < 0 || i < 0 || result > result * i) {
                    printf("Overflow occurred at factorial(%d).\n", i);
                    break;
                }
                
                // Update result
                result *= i;

                // Check if the next iteration would exceed the number we are calculating factorial for
                if (i + 1 <= num) {
                    i++;
                } else {
                    break;
                }
            }

            // Print the final result
            printf("Factorial of %d is: %d\n", num, result);
            break;
        }
        case '2': {
            char result = 1;
            int i = 1;

            while (1) {
                // Print current iteration and result
                printf("i: %d, result: %d\n", i, result);
                
                // Check if the next multiplication will cause overflow
                if (result < 0 || i < 0 || result > result * i) {
                    printf("Overflow occurred at factorial(%d).\n", i);
                    break;
                }
                
                // Update result
                result *= i;

                // Check if the next iteration would exceed the number we are calculating factorial for
                if (i + 1 <= num) {
                    i++;
                } else {
                    break;
                }
            }

            // Print the final result
            printf("Factorial of %d is: %d\n", num, result);
            break;
        }
        case '3': {
            long long result = 1;
            int i = 1;

            while (1) {
                // Print current iteration and result
                printf("i: %d, result: %lld\n", i, result);
                
                // Check if the next multiplication will cause overflow
                if (result < 0 || i < 0 || result > result * i) {
                    printf("Overflow occurred at factorial(%d).\n", i);
                    break;
                }
                
                // Update result
                result *= i;

                // Check if the next iteration would exceed the number we are calculating factorial for
                if (i + 1 <= num) {
                    i++;
                } else {
                    break;
                }
            }

            // Print the final result
            printf("Factorial of %d is: %lld\n", num, result);
            break;
        }
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
