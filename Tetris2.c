/*Nama File 	: Tetris2.c*/
/*Deskripsi  	: Menampilkan susunan karakter '*' */
/*Pembuat   	: Daniel Sahat Parulian Situmeang - 24060120140051*/
/*Tgl Pembuatan	: 22 Maret 2021, 22:47*/

#include <stdio.h> /*Header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int N; /*Nilai yang dibaca*/
    int i; /*counter*/
    int j; /*counter*/

    /*Algoritma*/
    printf("Masukkan nilai N : "),scanf("%d", &N); /* menginput nilai N */

    if (N <= 0){ /*Validasi*/
        printf("N harus positif"); /* output */
    }
    else { /* N>0*/
        for (i = 1; i <= N; i++)
        {
            for (j = 1; j <= i; j++)
            {
                    printf("* "); /* output */
            }
        printf(" --%d\n", i); /* output */
        }
        for (i = N-1; i >= 1 ; i--)
        {
            for (j = 1; j <= i; j++)
            {
                    printf("* "); /* output */
            }
        printf(" --%d\n", i); /* output */
        }
    }

  return 0;

}
