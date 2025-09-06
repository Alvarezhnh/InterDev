#include <stdio.h>

int main() {

    int a, b, c;

    printf("Nhap vao 3 so nguyen: ");

    scanf("%d %d %d", &a, &b, &c);

    if (a<0) a=-a;
    if (b<0) b=-b;
    if (c<0) c=-c;

    printf("Gia tri tuyet doi: %d %d %d", a, b, c);

    return 0;
}


