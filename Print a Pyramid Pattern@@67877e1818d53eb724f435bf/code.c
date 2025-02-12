#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);  // Input the number of rows

    // Outer loop for rows
    for (int i = 0; i < a; i++) {
        // Inner loop for printing spaces
        for (int j = 0; j < a - i - 1; j++) {
            printf(" ");  // Print spaces
        }
        // Loop for printing stars, with increment of 2
        for (int k = 0; k <= i * 2; k++) {
            printf("*");  // Print stars
        }
        printf("\n");  // Move to the next line after printing spaces and stars
    }

    return 0;
}
