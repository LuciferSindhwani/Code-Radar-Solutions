#include <stdio.h>

int main() {
    int a[3];
    int b;
    
    // Taking input correctly
    for (int j = 0; j < 3; j++) {
        scanf("%d", &a[j]);
    }

    // Initialize `b` with the first element
    b = a[0];

    // Finding the largest number
    for (int i = 0; i < 3; i++) {
        if (a[i] > b) {
            b = a[i];
        } else {
            continue;  // No parentheses needed
        }
    }

    // Print the largest value
    printf("Largest number: %d\n", b);

    return 0;
}
