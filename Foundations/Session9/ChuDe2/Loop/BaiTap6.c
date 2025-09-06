#include <stdio.h>

int main() {

    float a, b;

    printf("Nhap vao cac he so a va b: ");

    scanf("%f %f", &a, &b);

    if (a) printf("Phuong trinh co nghiem la: x = %.2f", -1.0*b/a);
        else {
            if (b) printf("Phuong trinh vo nghiem.");
                else printf("Phuong trinh co vo so nghiem.");
        }

    return 0;
}
