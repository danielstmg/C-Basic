/*Nama File 	: CekHari.c*/
/*Deskripsi 	: mengecek apakah nama hari berdasarkan nomor hari yang diinput dari keyboard sudah benar atau belum*/
/*Pembuat   	: Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 06 Maret 2021, 19:53 */

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int i;/*nomor hari yang akan di cek*/

    /*Algoritma*/
    printf("Masukkan nomor hari : "),scanf("%d", &i);/*menginput nomor hari*/
    if (i > 0 && i <= 7){
        if (i == 1){
            printf("Hari Senin");
        }
        else if (i == 2){
            printf("Hari Selasa");
        }
        else if (i == 3){
            printf("Hari Rabu");
        }
        else if (i == 4){
            printf("Hari Kamis");
        }
        else if (i == 5){
            printf("Hari Jumat");
        }
        else if (i == 6){
            printf("Hari Sabtu");
        }
        else if (i == 7){
            printf("Hari Minggu");
        }
    }
    else{
        printf("Masukan nomor hari tidak tepat");/* output */
    }


  return 0;
}

