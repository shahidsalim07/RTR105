#include <stdio.h>

int main() 
{
    char letter1, letter2, letter3;

    printf("Enter the first letter: ");
    scanf(" %c", &letter1);

    printf("Enter the second letter: ");
    scanf(" %c", &letter2);

    printf("Enter the third letter: ");
    scanf(" %c", &letter3);

    char order;

    printf("Enter 'a' for alphabetical order or 'd' for descending order: ");
    scanf(" %c", &order);

    if (letter1 > letter2) 
    {
        char temp = letter1;
        letter1 = letter2;
        letter2 = temp;
    }

    if (letter2 > letter3) 
    {
        char temp = letter2;
        letter2 = letter3;
        letter3 = temp;
    }

    if (letter1 > letter2) 
    {
        char temp = letter1;
        letter1 = letter2;
        letter2 = temp;
    }

    if (order == 'a') 
    { 
        printf("Alphabetical Order for these Letters: \n%c, %c, %c\n", letter1, letter2, letter3);
    } 
    else if (order == 'd') 
    {
        printf("Descending Order for these Letters: \n%c, %c, %c\n", letter3, letter2, letter1);
    }

    return 0;
}
