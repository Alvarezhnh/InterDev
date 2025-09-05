/*
Ho va ten: Tran Vu Bang
MSSV: A25015
Ten bai tap: Ve tam giac can dac
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=0, j=1;
    printf("Nhap vap so nguyen duong n: ");

    scanf("%d", &n);
    for (int i = 1 ; i <= n ; i++) {
        for (int j = 1 ; j <= n-i ; j++) printf(" ");
        for (int k = 1 ; k <= 2*i-1 ; k++) printf("*");
        printf("\n");
    }

    return 0;
}
