/*
Ho va ten: Tran Vu Bang
MSSV: A25015
Ten bai tap: Tinh giai thua
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, res = 1;
    printf("Nhap vap so nguyen duong n: ");

    scanf("%d", &n);

    for (int i = 2 ; i <= n ; i++) res *= i;
    printf("%d! = %d", n, res);

    return 0;
}
