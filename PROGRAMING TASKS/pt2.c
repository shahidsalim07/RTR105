#include <stdio.h>

int main() {
    char num; // Declare a variable 'num' to store the user's input
    
    // Prompt the user to enter a natural number
    printf("Enter a natural number: ");
    
    // Read the user's input and store it in the 'num' variable
    scanf("%hhd", &num);
    
    // Check if the entered number is negative
    if (num < 0) {
        printf("Please enter a non-negative number.\n");
        return 1; // Exit the program with an error code (1)
    }
    
    // Display a message indicating that we're going to print the binary representation
    printf("Binary representation of %d: ", num);
    
    // Calculate the number of bits in a char (usually 8)
    int bits = sizeof(char) * 8;
    
    // Use bitwise shift and masking to print the binary representation
    for (int i = bits - 1; i >= 0; i--) {
        char bit = (num >> i) & 1; // Right-shift 'num' by 'i' and then perform a bitwise AND with 1
        printf("%d", bit); // Print the binary digit (0 or 1)
    }
    
    printf("\n"); // Print a newline character to end the line
    
    return 0; // Exit the program with a success code (0)
}
