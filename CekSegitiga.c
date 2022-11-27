/*Nama File 	: CekSegitiga.c*/
/*Deskripsi 	: menentukan jenis segitiga melalui 3 buah sisinya yang diinput dari keyboard */
/*Pembuat   	: Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 05 Maret 2021, 14:06*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int p;/* sisi pertama segitiga */
    int q;/* sisi kedua segitiga */
    int r;/* sisi ketiga segitiga */

    /*Algoritma*/
    printf("Masukkan sisi pertama : "),scanf("%d", &p);/* menginput sisi pertama segitiga */
    printf("Masukkan sisi kedua : "),scanf("%d", &q);/* menginput sisi kedua segitiga */
    printf("Masukkan sisi ketiga : "),scanf("%d", &r);/* menginput sisi ketiga */
    if (p > 0 && q > 0 && r > 0){
        if (p == q && q == r && p == r){
            printf("Segitiga sama sisi");/* output */
        }
        else if (p != q && p != r && q != r){
            printf("Segitiga sembarang");/* output */
        }
        else{
            printf("Segitiga sama kaki");/* output */
        }
    }
    else{
        printf("Terdapat nilai yang bukan sisi segitiga");/* output */
    }

  return 0;
}

