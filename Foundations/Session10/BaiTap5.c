/*
Ho va ten: Tran Vu Bang
MSSV: A25015
Ten bai tap: Dem nguoc
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

    printf("Dem nguoc tu n ve 0: ");

    while (n >= 0) {
        printf("%d ", n);
        n--;
    }

    return 0;
}
