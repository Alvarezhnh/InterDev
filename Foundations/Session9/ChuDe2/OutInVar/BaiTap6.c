#include <stdio.h>

int main() {

    float P, R, T;

    printf("Nhap vao so tien goc: ");
    scanf("%f", &P);
    printf("Nhap vao lai suat: ");
    scanf("%f", &R);
    printf("Nhap vao thoi gian gui: ");
    scanf("%f", &T);

    printf("So tien lai la: %.3f\n", P*R*T/100.0);
    printf("Tong so tien nhan duoc la: %.3f", P + P*R*T/100.0);

    return 0;
}
