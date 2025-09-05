/*
Ho va ten: Tran Vu Bang
MSSV: A25015
Ten bai tap: Tinh tong cac so le
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    printf("Nhap vap so nguyen duong n: ");

    scanf("%d", &n);

    for (int i = 1 ; i <= n ; i++) {
            if (i % 2) sum += i;
    }
    printf("Tong cac so le tu 1 den n la: %d", sum);

    return 0;
}
