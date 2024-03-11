#include <stdio.h>

unsigned long long factorial(unsigned long long n);
unsigned long long previous_answer(unsigned long long current_answer, unsigned long long n);
int is_condition_valid(unsigned long long current_answer, unsigned long long prev_answer, unsigned long long n);

int main() {
    unsigned long long number, current_answer, prev_answer;

    printf("Enter a positive number to calculate its factorial: ");
    scanf("%llu", &number);

    current_answer = factorial(number);
    prev_answer = previous_answer(current_answer, number);

    if (is_condition_valid(current_answer, prev_answer, number)) {
        printf("The factorial of %llu is: %llu\n", number, current_answer);
        printf("The previous answer obtained by dividing the current answer by its factorial is: %llu\n", prev_answer);
    } else {
        printf("Error: The condition is not valid.\n");
    }

    return 0;
}

unsigned long long factorial(unsigned long long n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

unsigned long long previous_answer(unsigned long long current_answer, unsigned long long n) {
    if (n == 0) return 0; // Division by zero is not defined
    return current_answer / n;
}

int is_condition_valid(unsigned long long current_answer, unsigned long long prev_answer, unsigned long long n) {
    return (current_answer / factorial(n)) == prev_answer;
}
