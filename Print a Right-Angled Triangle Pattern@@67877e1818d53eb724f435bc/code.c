#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);  // Input the number of rows

    // Outer loop for rows
    for (int i = 0; i < a; i++) {
        // Inner loop for printing stars
        for (int j = 0; j < i; j++) {
            printf("* ");  // Print a star followed by a space
        }
        printf("\n");  // Move to the next line after printing stars
    }

    return 0;
}
