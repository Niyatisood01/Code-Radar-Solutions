#include <stdio.h>

int main() {
    int num;  // Declare an integer variable

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);  // Read the number from the user

    // Check if the number is even or odd
    if (num % 2 == 0) {
        printf("%d is even.\n", num);  // If remainder is 0, the number is even
    } else {
        printf("%d is odd.\n", num);   // If remainder is 1, the number is odd
    }

    return 0;  // Exit the program
}
