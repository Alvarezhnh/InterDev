/*
 Ho va ten: Tran Vu Bang
 MSSV: A25015
 Ten bai tap: Tim cac uoc cua mot so
 */

 #include <stdio.h>

 int main() {

     int n;

     printf("Nhap vao so nguyen n: ");

     scanf("%d", &n);

     printf("Cac uoc so cua %d la: ", n);

     for (int i = 1 ; i <= n ; i++) if (n%i == 0) printf("%d ", i);

     return 0;
 }
