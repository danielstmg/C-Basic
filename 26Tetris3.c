/*Nama File 	: 26Tetris3.c*/
/*Deskripsi 	: menampilkan pola looping 4 */
/*Pembuat   	: 24060120140051 - Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 22 Maret 2021*/

#include <stdio.h>/*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void)
{
    int i, batas, deret;
    printf("Masukkan batas : ");
    scanf("%d", &batas);
    i = 1;
    while (i <= batas)
    {
        deret = (i * (i + 1)) / 2;
        for (int j = 0; j < deret; j++)
        {
            printf("*");
        }
        printf("  ----%d\n", deret);
        i++;
    }
    return 0;
}
