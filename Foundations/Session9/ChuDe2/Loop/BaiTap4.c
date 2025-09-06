#include <stdio.h>

int main() {

    char c;

    printf("Nhap vao ki tu can kiem tra: ");

    scanf("%c", &c);

    if (c >= '0' && c <= '9') printf("Ki tu da nhap la 1 chu so tu '0' toi '9'.");
        else printf("Ki tu da nhap khong la 1 chu so tu '0' toi '9'.");


    return 0;
}
