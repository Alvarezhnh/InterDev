/*
Ho va ten: Tran Vu Bang
MSSV: A25015
Ten bai tap: In day so tu nhien
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap vao so nguyen duong n: ");

    scanf("%d", &n);
    printf("Cac so tu 1 toi n la:\n");

    for (int i = 1 ; i <= n ; i++) printf("%d ", i);

    return 0;
}
