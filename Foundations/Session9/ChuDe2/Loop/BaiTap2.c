#include <stdio.h>

int main() {

    int n;

    printf("Nhap vao so nguyen can kiem tra: ");

    scanf("%d", &n);

    if (n%2) printf("%d la so le.", n);
        else printf("%d la so chan.", n);

    return 0;
}
