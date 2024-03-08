#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    long n, originalN, sum = 0, remainder;

    scanf("%ld", &n);

    originalN = n;

    while (n > 0) {
        remainder = n % 10;
        sum += factorial(remainder);
        n /= 10;
    }

    if (originalN == sum) {
        printf("Strong number\n");
    } else {
        printf("Not a strong number\n");
    }

    return 0;
}
