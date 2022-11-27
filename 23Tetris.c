/*Nama File 	: 23Tetris.c*/
/*Deskripsi 	: menampilkan pola looping 1 */
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
    while (i < batas)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("  ----%d\n", i + 1);
        i++;
    }
    return 0;
}
