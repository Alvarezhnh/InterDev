#include <stdio.h>

int main() {

    int a, b;

    printf("Nhap vao hai so nguyen: ");
    scanf("%d %d", &a, &b);

    if (a>b) printf("So lon hon la: %d", a);
        else printf("So lon hon la: %d", b);

    return 0;
}
