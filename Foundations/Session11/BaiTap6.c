/*
 Ho va ten: Tran Vu Bang
 MSSV: A25015
 Ten bai tap: Kiem tra so nguyen to
 */

 #include <stdio.h>

 int main() {

     int n, fl = 1;

     printf("Nhap vao so nguyen n: ");

     scanf("%d", &n);

     for (int i = 2 ; i*i <= n ; i++) {
        if (n%i==0) {
                printf("%d khong la so nguyen to.", n);
                fl = 0;
                break;
        }
     }

     if (fl) printf("%d la so nguyen to.", n);

     return 0;
 }
