#include <stdio.h>

int main() {

    int a, b, c;

    printf("Nhap vao 3 so nguyen: ");

    scanf("%d %d %d", &a, &b, &c);

    if ((a+b) > c && (a+c) > b && (b+c) > a) {
        if (a == b && b == c) printf("Tam giac deu.");
        else if (a == b || b == c || c == a) {
            if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)) printf("Tam giac vuong can.");
                else printf("Tam giac can.");
        }
        else if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)) printf("Tam giac vuong.");
        else printf("Tam giac thuong.");

    }
    else printf("Khong tao thanh tam giac.");


    return 0;
}
