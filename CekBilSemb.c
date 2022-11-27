/*Nama File 	: CekBilSemb.c*/
/*Deskripsi 	: mengecek bilangan i apakah bilangan bulat positif atau bilangan bulat negatif*/
/*Pembuat   	: Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 06 Maret 2021, 19:23 */

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int i;/*bilangan bulat yang akan di cek*/

    /*Algoritma*/
    printf("Masukkan i : ");
    if (scanf("%d", &i)!=1){
        printf("Bukan termasuk sebuah bilangan");
    }
    else{
        if (i > 0){
            printf("bilangan bulat positif");
        }
        else if (i < 0){
            printf("bilangan bulat negatif");
        }
        else{
            printf("nol");
        }
    }

  return 0;
}

