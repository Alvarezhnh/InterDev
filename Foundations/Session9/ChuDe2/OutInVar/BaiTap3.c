#include <stdio.h>

int main() {

    int a, b, C, S;

    printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%d", &a);
    printf("Nhap chieu rong hinh chu nhat: ");
    scanf("%d", &b);

    C = (a + b)*2;
    S = a*b;

    printf("Chu vi hinh chu nhat la: %d\n", C);
    printf("Dien tich hinh chu nhat la: %d", S);

    return 0;
}
