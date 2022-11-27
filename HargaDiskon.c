/*Nama File 	: HargaDiskon.c*/
/*Deskripsi 	: menghitung besarnya harga setelah diberi diskon*/
/*Pembuat   	: Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 14 Maret 2021, 11:32 */

#include <stdio.h>/*header file*/
#include <stdlib.h>/*header file*/

/*Program Utama*/
int main()
{
/*Kamus*/
    char jenis;/*besaran jenis pakaian dimana hanya terdapat A,B dan C*/
    int harga;/*harga pakaian setelah didiskon*/

/*Algoritma*/
    printf("Masukkan jenis yang dipilih: "),scanf("%c", &jenis);/*menginput jenis*/
    printf("Masukkan harga jenis: "),scanf("%d", &harga);/*menginput harga*/

    if (jenis=='A'){
        printf("%d", harga-harga*10/100);/* output */
    }
    else if (jenis=='B'){
        printf("%d", harga-harga*15/100);/* output */
    }
    else {
        printf("%d", harga-harga*20/100);/* output */
    }

    return 0;
}
