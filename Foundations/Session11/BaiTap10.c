/*
 Ho va ten: Tran Vu Bang
 MSSV: A25015
 Ten bai tap: Tinh tong chuoi so
 */

#include <stdio.h>
#include <math.h>

 int main() {

     int n;
     float x, S = 1, p = 1;

     printf("Nhap vao so thuc x va so nguyen n: ");

     scanf("%f %d", &x, &n);

     for (int i = 1 ; i <= n ; i++) {
        p = p*x/i;
        S += p;
        printf("%f\n", S);
     }

     printf("Tong cua chuoi so la: %.6f", S);

     return 0;
 }
