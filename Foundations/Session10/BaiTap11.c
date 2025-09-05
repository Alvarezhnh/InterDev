/*
Ho va ten: Tran Vu Bang
MSSV: A25015
Ten bai tap: Day Fibonacci
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 0, j = 1;
    printf("Nhap vap so nguyen duong n: ");

    scanf("%d", &n);
    printf("%d so dau tien cua day Fibonacci la:\n", n);

    for (int k = 1 ; k <= n ; k++) {
        j = j + i;
        i = j - i;
        printf("%d ", i);
    }

    return 0;
}
