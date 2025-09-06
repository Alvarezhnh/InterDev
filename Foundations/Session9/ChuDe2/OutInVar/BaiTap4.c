#include <stdio.h>

int main() {

    float C, F;

    printf("Nhap vao nhiet do C: ");

    scanf("%f", &C);

    F = C*9/5.0 + 32;

    printf("%.2f do F", F);

    return 0;
}
