#include <stdio.h>

int main() {
    int a, b;
    char c;

    scanf("%d %d %*c%c", &a, &b, &c);  // Skips newline before reading char

    if (c == '+ ') {
        printf("%d", a + b);
    } 
    else if (c == '-') {
        printf("%d", a - b);
    } 
    else if (c == '*') {
        printf("%d", a * b);
    } 
    else if (c == '/') {
        if (b == 0) {
            printf("Error: Division by zero");
        } else {
            printf("%d", a / b);
        }
    } 
    else {
        printf("Error: Invalid operator");
    }

    return 0;
}
