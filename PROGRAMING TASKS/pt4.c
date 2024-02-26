#include<stdio.h>

void calculateAndPrintFactorial(char datatype, long long num);

int main() {
  char datatype;
  long long num;

  while (1) {
    printf("Enter a decimal number (or enter 0 to exit): ");
    scanf("%lld", &num);

    if (num == 0) {
      printf("Exiting the program.\n");
      break;
    }

    while (getchar() != '\n');

    printf("Enter a datatype (1 for char, 2 for int, or 3 for long long): ");
    scanf(" %c", &datatype);

    calculateAndPrintFactorial(datatype, num);
  }

  return 0;
}

void calculateAndPrintFactorial(char datatype, long long num) {
  long long result = 1;
  long long factorial = 1;

  for (long long i = 1; i <= num; i++) {
    result *= i;
    factorial *= i;
  }

  printf("Factorial of the given number using %s is: %lld.\n",
         (datatype == '1') ? "char" : ((datatype == '2') ? "int" : "long long"), result);
}
