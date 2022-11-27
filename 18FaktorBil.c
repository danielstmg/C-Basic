/*Nama File 	: 17FaktorBil.c*/
/*Deskripsi 	: menentukan faktor bil */
/*Pembuat   	: 24060120140051 - Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 22 Maret 2021*/

#include <stdio.h>/*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void)
{
    int N, i;
    i = 1;
    printf("Masukkan nilai N :");
    scanf("%d", &N);
    if (N > 0)
    {
        printf("Faktor bilangan dari %d adalah ", N);
        while (i <= N)
        {
            if (N % i == 0)
            {
                printf("%d ", i);
            }
            i++;
        }
    }
    else
    {
        printf("Masukkan bilangan positif");
    }
    return 0;
}
