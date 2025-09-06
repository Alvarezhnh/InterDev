#include <stdio.h>

int main() {

    int n;

    printf("Nhap vao so nguyen can kiem tra: ");

    scanf("%d", &n);

    if (n > 1 && n < 100) printf("So da nhap thuoc khoang 1 toi 100.");
        else printf("So da nhap khong thuoc khoang 1 toi 100.");

    return 0;
}


