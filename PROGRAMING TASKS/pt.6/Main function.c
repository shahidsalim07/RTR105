#include <stdio.h>
#include <stdlib.h> // Include this header for the rand() function

// Function 1: display_message
void display_message() {
  printf("Hello, this is function 1!\n");
}

// Function 2: greet_user
void greet_user(char name[]) {
  printf("Hello, %s! Welcome to function 2.\n", name);
}

// Function 3: get_random_number
int get_random_number() {
  return rand(); // Generates a pseudo-random number
}

// Function 4: calculate_sum
int calculate_sum(int num1, int num2) {
  return num1 + num2;
}

int main() {
  // Call function 1
  display_message();

  // Call function 2 with an argument
  char name[20];
  printf("Enter your name: ");
  scanf("%s", name);
  greet_user(name);

  // Call function 3 and store the result in a variable
  int random_number = get_random_number();
  printf("Random number: %d\n", random_number);

  // Call function 4 with arguments and print the result
  int num1 = 10;
  int num2 = 20;
  int sum = calculate_sum(num1, num2);
  printf("Sum of %d and %d is: %d\n", num1, num2, sum);

  return 0;
}
