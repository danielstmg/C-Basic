/*Nama File 	: 21DeretPrima.c*/
/*Deskripsi 	: menampilkan deret bil.prima */
/*Pembuat   	: 24060120140051 - Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 22 Maret 2021*/

#include <stdio.h>/*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void)
{
    int N, i, fac;
    i = 1;
    printf("Masukkan N : ");
    scanf("%d", &N);
    printf("Deret prima adalah ");
    while (i <= N)
    {
        fac = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                fac += 1;
            }
        }

        if (fac == 2)
        {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}
