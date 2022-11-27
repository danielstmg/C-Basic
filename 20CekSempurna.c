/*Nama File 	: 18CekSempurna.c*/
/*Deskripsi 	: mengecek bilangan sempurna */
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
        for (i = 1; i < N; i++)
        {
            if (N % i == 0)
            {
                fac += i;
            }
        }
        if (fac == N)
        {
            printf("N=%d adalah bilangan sempurna\n", N);
        }
        else
        {
            printf("N=%d BUKAN bilangan sempurna\n", N);
        }
    }
    else
    {
        printf("Masukkan bilangan positif!");
    }
    return 0;
}
