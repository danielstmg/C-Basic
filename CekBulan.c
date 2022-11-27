/*Nama File 	: CekBulan.c*/
/*Deskripsi 	: menampilkan nama-nama bulan dengan mengecek apakah angka yang diinput dari keyboard adalah nama-nama bulan dari nomor bulan atau tidak*/
/*Pembuat   	: Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 07 Maret 2021, 22:30*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int i ;/* angka yang diinput dari keyboard */

    /*Algoritma*/
    printf("Masukkan angka : "),scanf("%d", &i);/* Menginput angka yang akan dicek */
    if (i > 0 && i <= 12){
        if (i == 1){
            printf("Bulan Januari");/* output */
        }
        else if (i == 2){
            printf("Bulan Februari");/* output */
        }
        else if (i == 3){
            printf("Bulan Maret");/* output */
        }
        else if (i == 4){
            printf("Bulan April");/* output */
        }
        else if (i == 5){
            printf("Bulan Mei");/* output */
        }
        else if (i == 6){
            printf("Bulan Juni");/* output */
        }
        else if (i == 7){
            printf("Bulan Juli");/* output */
        }
        else if (i == 8){
            printf("Bulan Agustus");/* output */
        }
        else if (i == 9){
            printf("Bulan September");/* output */
        }
        else if (i == 10){
            printf("Bulan Oktober");/* output */
        }
        else if (i == 11){
            printf("Bulan November");/* output */
        }
        else if (i == 12){
            printf("Bulan Desember");/* output */
        }
    }
    else{
        printf("Masukan nomor bulan tidak tepat");/* output */
    }

  return 0;
}

