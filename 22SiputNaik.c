/*Nama File 	: 22SiputNaik.c*/
/*Deskripsi 	:  mengetahui berapa hari waktu yang dibutuhkan oleh
                    siput untuk mencapai ketinggin N meter */
/*Pembuat   	: 24060120140051 - Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 22 Maret 2021*/

#include <stdio.h>/*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void)
{
    float N, i, hari;
    printf("Masukkan ketinggian : ");
    scanf("%f", &N);
    if (N > 0)
    {
        i = 0;
        hari = 0;
        while (i < N)
        {
            i += 0.2;
            hari = N / 2 * 10;
        }
        printf("Ketinggian %.1f m ditempuh dalam %.1f hari\n", N, hari);
    }
    else
    {
        printf("Masukkan bilangan positif");
    }
    return 0;
}
