/*Nama File 	: 27Segitiga.c*/
/*Deskripsi 	: menampilkan pola looping piramida terbalik */
/*Pembuat   	: 24060120140051 - Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 22 Maret 2021*/

#include <stdio.h>/*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void)
{
    int i, j, k, batas;
    i = 0;
    printf("Masukkan batas : ");
    scanf("%d", &batas);
    while (i < batas)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (k = i; k < batas; k++)
        {
            printf("* ");
        }
        printf(" ---%d\n", (-1) * (i - 5));
        i++;
    }
    return 0;
}
