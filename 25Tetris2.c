/*Nama File 	: 25Tetris2.c*/
/*Deskripsi 	: menampilkan pola looping 3 */
/*Pembuat   	: 24060120140051 - Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 22 Maret 2021*/

#include <stdio.h>/*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void)
{
    int i, batas;
    printf("Masukkan batas : ");
    scanf("%d", &batas);
    for (i = 0; i < batas; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("  ----%d\n", i + 1);
    }
    for (i = 1; batas > i; batas--)
    {
        for (int j = 1; j < batas; j++)
        {
            printf("*");
        }
        printf("  ----%d\n", batas - 1);
    }
    return 0;
}
