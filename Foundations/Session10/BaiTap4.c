/*
Ho va ten: Tran Vu Bang
MSSV: A25015
Ten bai tap: Tinh tong cac so
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    printf("Nhap vap so nguyen duong n: ");

    scanf("%d", &n);

    for (int i = 1 ; i <= n ; i++) sum += i;
    printf("Tong cac so tu 1 den n la: %d", sum);

    return 0;
}
