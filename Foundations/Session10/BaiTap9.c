/*
Ho va ten: Tran Vu Bang
MSSV: A25015
Ten bai tap: Dem so luong chu so
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cnt = 0;
    printf("Nhap vap so nguyen duong n: ");

    scanf("%d", &n);

    while (n) {
        ++cnt;
        n /= 10;
    }

    printf("So luong chu so cua n la: %d", cnt);

    return 0;
}
