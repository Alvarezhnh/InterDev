/*
 Ho va ten: Tran Vu Bang
 MSSV: A25015
 Ten bai tap: Tim uoc chung lon nhat
 */

 #include <stdio.h>

 int main() {

     int a, b, r;

     printf("Nhap vao 2 so nguyen duong a va b: ");

     scanf("%d %d", &a, &b);

     while (b != 0) {
        r = a%b;
        a = b;
        b = r;
     }

     printf("Uoc chung lon nhat la: %d", a);
     return 0;
 }
