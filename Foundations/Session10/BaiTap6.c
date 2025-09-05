/*
Ho va ten: Tran Vu Bang
MSSV: A25015
Ten bai tap: Nhap lai cho den khi dung
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    do {
        printf("Nhap mot so trong khoang 1 toi 100: ");
        scanf("%d", &n);
    }
    while (n < 1 || n > 100);

    return 0;
}
