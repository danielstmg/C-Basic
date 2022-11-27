/*Nama File 	: CekSeriPositif.c*/
/*Deskripsi 	: menghitung total tahanan dari 3 buah tahanan yang dirangkai secara seri dengan syarat ketiga tahanan harus bernilai positif */
/*Pembuat   	: Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 05 Maret 2021, 13:28*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int R1;/* tahanan pertama */
    int R2;/* tahanan kedua */
    int R3;/* tahanan ketiga */
    int Rtot;/* tahanan total */

    /*Algoritma*/
    printf("Masukkan tahanan pertama : "),scanf("%d", &R1);/* menginput tahanan pertama */
    printf("Masukkan tahanan kedua : " ),scanf("%d", &R2);/* menginput tahanan kedua */
    printf("Masukkan tahanan ketiga : "),scanf("%d", &R3); /* menginput tahanan ketiga */
    Rtot = R1 + R2 + R3;/* proses menghitung tahanan total */
    if (R1 > 0 && R2 > 0 && R3 > 0){
        printf("Tahanan totalnya adalah : %d", Rtot);/* output */
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");/* output*/
    }

  return 0;
}

