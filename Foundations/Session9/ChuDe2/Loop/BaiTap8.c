#include <stdio.h>

int main() {

    float m;

    printf("Nhap vao diem: ");

    scanf("%f", &m);

    if (m >= 9) printf("Xuat sac");
        else if (m >= 8) printf("Gioi");
            else if (m >= 6.5) printf("Kha");
                else if (m >= 5) printf("Trung binh");
                    else printf("Yeu");

    return 0;
}
