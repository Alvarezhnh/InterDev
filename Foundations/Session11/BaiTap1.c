/*
 Ho va ten: Tran Vu Bang
 MSSV: A25015
 Ten bai tap: Tinh tong cac so tu nhien
 */

 #include <stdio.h>

 int main() {

     int n, sum = 0;

     printf("Nhap vao so nguyen n: ");

     scanf("%d", &n);

     printf("Cac so tu nhien dau tien la: ");

     for (int i = 1 ; i <= n ; i++) {
            printf("%d ", i);
            sum += i;
     }

     printf("\nTong cua chung la: %d", sum);

     return 0;
 }
