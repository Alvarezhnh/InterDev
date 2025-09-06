#include <stdio.h>

int main() {

    float T, L, H;

    printf("Nhap vao diem Toan: ");
    scanf("%f", &T);
    printf("Nhap vao diem Li: ");
    scanf("%f", &L);
    printf("Nhap vao diem Hoa: ");
    scanf("%f", &H);

    printf("Tong diem la: %.2f\n", T+L+H);
    printf("Diem trung binh la: %.2f", (T+L+H)/3.0);

    return 0;
}
