#include <stdio.h>

int main() {


    int n;

    printf("Nhap vao nam can kiem tra: ");

    scanf("%d", &n);

    if ((n%4==0 && n%100) || n%400==0) printf("Nam nhuan.");
        else printf("Nam khong nhuan.");

    return 0;
}
