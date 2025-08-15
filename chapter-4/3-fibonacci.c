#include <stdio.h>

// Function to calculate the nth Fibonacci number iteratively
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int prev1 = 0; // F(0)
    int prev2 = 1; // F(1)
    int current;

    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }

    return current;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("Fibonacci number at position %d is %d\n", n, result);

    return 0;
}
