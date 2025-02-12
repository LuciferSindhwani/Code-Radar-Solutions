#include <stdio.h>

int main() {
    int a;
    int j = 0;
    scanf("%d", &a);

    // Special check for a = 1
    if (a == 1) {
        printf("Not Prime");
        return 0;  // Exit if the number is 1
    }

    // Loop to check for factors
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            j = 1;
            break;
        }
    }

    // Output based on the value of j
    if (j == 1) {
        printf("Not Prime");
    } else {
        printf("Prime");
    }

    return 0;
}
