#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c;

    printf("Nhap vao cac he so a, b va c: ");

    scanf("%f %f %f", &a, &b, &c);

    if (a) {
        float D = b*b - 4*a*c;
        if (D<0) printf("Phuong trinh vo nghiem.");
        else if (!D) printf("Phuong trinh co nghiem kep: x = %.3f", -b/(2*a));
        else {
            printf("Phuong trinh co 2 nghiem phan biet: \n");
            printf("x1 = %.3f\n",(-b + sqrt(D)) / (2*a));
            printf("x2 = %.3f\n",(-b - sqrt(D)) / (2*a));
        }
    }
     else {
        if (b) printf("Phuong trinh co nghiem duy nhat: x = %.3f", -c/b);
        else {
            if (c) printf("Phuong trinh vo nghiem.");
            else printf("Phuong trinh co vo so nghiem.");
        }
     }

    return 0;
}


