/*
 Ho va ten: Tran Vu Bang
 MSSV: A25015
 Ten bai tap: Tim va tinh tong cac so
 */

 #include <stdio.h>

 int main() {

     int n, sum = 0;

     printf("Nhap vao so nguyen n: ");

     scanf("%d", &n);

     printf("Cac so chan tu 1 toi %d la: ", n);

     for (int i = 2 ; i <= n ; i++) {
        if (i%2 == 0) {
                printf("%d ", i);
                sum += i;
     }
     }

     printf("\nTong cac so chan la: %d", sum);

     return 0;
 }
