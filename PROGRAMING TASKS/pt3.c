#include <stdio.h>

int main() {
  char letter[3];
  char order;

  printf("Enter the first letter: ");
  scanf(" %c", &letter[0]);

  printf("Enter the second letter: ");
  scanf(" %c", &letter[1]);

  printf("Enter the third letter: ");
  scanf(" %c", &letter[2]);

  printf("Enter A for ascending order or D for descending order: ");
  scanf(" %c", &order);

  if (order == 'A') {
    printf("Sorted letters: %c %c %c\n", letter[0], letter[1], letter[2]);
  } else {
    printf("Sorted letters: %c %c %c\n", letter[2], letter[1], letter[0]);
  }

  return 0;
}
