#include <stdio.h>

int main() {

    float a, b;
    char ch;

    printf("Nhap vao 2 so nguyen va phep tinh: ");

    scanf("%f %f %c", &a, &b, &ch);

    switch (ch) {

    case '+' :
        {
            printf("%.3f", a+b);
            break;
        }
    case '-' :
        {
            printf("%.3f", a-b);
            break;
        }
    case '*' :
        {
            printf("%.3f", a*b);
            break;
        }
    case '/' :
        {
            if (b) printf("%.3f", a/b);
                else printf("Khong ton tai phep chia cho 0.");
            break;
        }

    }

    return 0;
}

