/*Nama File 	: BiayaParkir.c*/
/*Deskripsi 	: menentukan besarnya biaya parkir yang dihitung berdasarkan lamanya parkir*/
/*Pembuat   	: Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 14 Maret 2021, 10:50 */

#include <stdio.h>/*header file*/
#include <stdlib.h>/*header file*/

/*Program Utama*/
int main()
{

/*Kamus*/
    int jam;/*lamanya parkir*/
    int biaya;/*biaya parkir*/

/*Algoritma*/
    printf("Masukkan berapa jam parkir: "),scanf("%d", &jam);/*menginput lamanya parkir dalam jam*/

    biaya = 2000 + (jam-2) * 500;/*proses menghitung biaya parkir*/
    if(jam>0 && jam<=2){
        printf("Biaya yang harus dibayar selama %d jam: Rp 2000 ", jam);/* output */
    }
    else{
        printf("Biaya yang harus dibayar selama %d jam: %d", jam, biaya);/* output */
    }

    return 0;
}
