/*
 Ho va ten: Tran Vu Bang
 MSSV: A25015
 Ten bai tap: Kiem tra so Armstrong
 */

#include <stdio.h>
#include <math.h>

 int main() {

     int n, cnt = 0, tmp, sum = 0;

     printf("Nhap vao so nguyen n: ");

     scanf("%d", &n);

     tmp = n;

     while (tmp) {
        ++cnt;
        tmp /= 10;
     }

     tmp = n;

     while (tmp) {
        sum += pow(tmp%10, cnt);
        tmp /= 10;
     }

     if (sum == n) printf("%d la so Armstrong", n);
        else printf("%d khong phai la so Armstrong", n);

     return 0;
 }
