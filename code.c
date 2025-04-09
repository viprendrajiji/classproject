
#include <stdio.h>
#include "basic_codes.h"

int main() {
    int a = 10, b = 20;
    printf("Sum: %d\n", sum(a, b));

    int n = 5;
    printf("Factorial of %d: %d\n", n, factorial(n));

    int check = 8;
    if (is_even(check)) {
        printf("%d is even.\n", check);
    } else {
        printf("%d is odd.\n", check);
    }

    return 0;
}
