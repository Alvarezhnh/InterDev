#include <stdio.h>

int sum(int n) {
    int sum = 0;
    for (int i = 1 ; i <= n ; i++) sum +=i;
    return sum;
}

int isPrime(int n) {
    for (int i = 2 ; i*i <= n ; i++) if (n%i == 0) return 0;
    return 1;
}

int gcd(int a, int b) {
    int r;
    while (b != 0) {
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int maxDigit(int n) {
    int max = 0;
    while (n) {
        if (max < n%10) max = n%10;
        n /= 10;
    }
    return max;
}

int isPerfectNum(int n) {
    int sum = 0;
    for (int i = 1 ; i < n ; i++) if (n%i == 0) sum += i;
    if (sum == n) return 1;
    return 0;
}

void printPerfectNum() {
    for (int i = 1 ; i <= 1000 ; i++) if (isPerfectNum(i)) printf("%d ",i);
}
int reverse(int n) {
    int rev = 0;
    while (n) {
        rev = rev*10 + n%10;
        n /= 10;
    }
    return rev;
}
int main() {



    return 0;
}
