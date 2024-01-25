#include <stdio.h>

int main() 
{
    char letter1, letter2, letter3;

    // User input for three letters
    printf("Enter the first letter: ");
    scanf(" %c", &letter1);

    printf("Enter the second letter: ");
    scanf(" %c", &letter2);

    printf("Enter the third letter: ");
    scanf(" %c", &letter3);

    char order;

    // User input for order preference
    printf("Enter 'a' for alphabetical order or 'd' for decsending order: ");
    scanf(" %c", &order);

    // Sorting logic
    if (letter1 > letter2) 
    {
        // Swap letter1 and letter2 using a temporary variable
        char temp = letter1;
        letter1 = letter2;
        letter2 = temp;
    }

    if (letter2 > letter3) 
    {
        // Swap letter2 and letter3 using a temporary variable
        char temp = letter2;
        letter2 = letter3;
        letter3 = temp;
    }

    if (letter1 > letter2) 
    {
        // Double-check and swap letter1 and letter2 if needed
        char temp = letter1;
        letter1 = letter2;
        letter2 = temp;
    }

    // Output based on user's order preference
    if (order == 'a') 
    { 
        printf("Alphabetical Order for these Letters: \n%c, %c, %c\n", letter1, letter2, letter3);
    } 
    else if (order == 'd') 
    {
        printf("descending order for these Letters: \n%c, %c, %c\n", letter3, letter2, letter1);
    }

    return 0;
}
