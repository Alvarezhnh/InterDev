#include <stdio.h>

int sum(int n) {
    if (n == 1) return 1;
    else return n + sum(n-1);
}

int squareSum(int n) {
    if (n == 1) return 1;
    else return n*n + squareSum(n-1);
}

int Factorial(int n) {
    if (n == 0) return 1;
    else return n*Factorial(n-1);
}

int Fibonacci(int n) {
    if (n == 1 || n == 2) return 1;
    else return Fibonacci(n-1) + Fibonacci(n-2);
}

void printDivisor(int n, int i = 1) {
    if (i <= n) {
        if (n%i == 0) printf("%d ", i);
        printDivisor(n, i+1);
    }
}
