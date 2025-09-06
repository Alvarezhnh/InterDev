/*
 Ho va ten: Tran Vu Bang
 MSSV: A25015
 Ten bai tap: Ve tam giac Pascal
 */

 #include <stdio.h>

 int main() {

     int n, Cij;

     printf("Nhap vao so nguyen n: ");

     scanf("%d", &n);

     for (int i = 0 ; i < n ; i++) {

         for (int j = 0 ; j < n-i-1 ; j++) printf(" ");

        for (int j = 0 ; j <= i ; j++) {

            int a = 1, b = 1, c = 1;

                for (int k = 2 ; k <= i ; k++) a *= k;
             for (int k = 2 ; k <= j ; k++) b *= k;
        for (int k = 2 ; k <= i - j ; k++) c *= k;

            printf("%d ", a/(b*c));
        }
        printf("\n");
     }

     return 0;
 }
