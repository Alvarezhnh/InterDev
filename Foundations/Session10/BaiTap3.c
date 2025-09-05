/*
Ho va ten: Tran Vu Bang
MSSV: A25015
Ten bai tap: Bang cuu chuong
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap vap so nguyen duong n: ");

    scanf("%d", &n);
    printf("Bang cuu chuong cua %d la:\n", n);

    for (int i = 1 ; i <= 10 ; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}
