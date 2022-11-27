/*Nama File 	: 24Tetris1.c*/
/*Deskripsi 	: menampilkan pola looping 2 */
/*Pembuat   	: 24060120140051 - Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 22 Maret 2021*/

#include <stdio.h>/*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void)
{
    int i, batas;
    i = 0;
    printf("Masukkan batas : ");
    scanf("%d", &batas);
    while (batas > i)
    {
        for (int j = 0; j < batas; j++)
        {
            printf("*");
        }
        printf("  ----%d\n", batas);
        batas--;
    }
    return 0;
}
