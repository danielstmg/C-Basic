/*Nama File 	: CekProsesBil.c*/
/*Deskripsi 	: mngecek bilangan N yang akan diklasifikasi proses dengan output nilai N yang terakhir setelah diklasifikasi */
/*Pembuat   	: Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 06 Maret 2021, 09:34*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int N ;/* angka yang diinput dari keyboard */

    /*Algoritma*/
    printf("Masukkan N : "),scanf("%d", &N);/* Menginput angka yang akan dicek */
    if(N % 2 == 0){
        N = N + 3;
        if(N % 5 == 0){
            N = N + 5;
            printf("Nilai N adalah : %d", N);/* output */
        }
        else{
            N = N + 2;
            printf("Nilai N aadalah : %d", N);/* output */
        }

    }
    else{
        N = N + 2;
        if (N % 3 == 0){
            N = N + 4;
            printf("Nilai N adalah : %d", N);/* output */
        }
        else{
            N = N + 1;
            printf("Nilai N adalah : %d", N);/* output */
        }

    }

  return 0;
}

