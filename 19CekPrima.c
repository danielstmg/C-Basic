/*Nama File 	: 18CekPrima.c*/
/*Deskripsi 	: mengecek bilangan prima */
/*Pembuat   	: 24060120140051 - Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 22 Maret 2021*/

#include <stdio.h>/*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void)
{
    int N, i, fac;
    fac = 0;
    printf("Masukkan bilangan : ");
    scanf("%d", &N);
    if (N > 0)
    {
        for (i = 1; i <= N; i++)
        {
            if (N % i == 0)
            {
                fac += 1;
            }
        }
        if (fac == 2)
        {
            printf("%d adalah bilangan prima\n", N);
        }
        else
        {
            printf("%d BUKAN bilangan prima\n", N);
        }
    }
    else
    {
        printf("Masukkan bilangan positif!");
    }
    return 0;
}
