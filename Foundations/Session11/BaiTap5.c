/*
 Ho va ten: Tran Vu Bang
 MSSV: A25015
 Ten bai tap: Ve tam giac vuong sao
 */

 #include <stdio.h>

 int main() {

     int n;

     printf("Nhap vao so nguyen n: ");

     scanf("%d", &n);

     for (int i = 1 ; i <= n ; i++) {
        for (int j = 1 ; j <= i ; j++) {
            printf("*");
        }
        printf("\n");
     }

     return 0;
 }
