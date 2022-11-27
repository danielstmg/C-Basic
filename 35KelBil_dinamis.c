/*Nama File 	: 35KelBil_dinamis.c*/
/*Deskripsi 	: menghitung faktor terkecil dr beberapa bilangan */
/*Pembuat   	: 24060120140051 - Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 22 Maret 2021*/

#include <stdio.h>/*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void)
{
    int *ptr, n, i, j, sum;
    printf("Masukkan jumlah blok : ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memori ga cukup bos");
    }

    for (i = 0; i < n; i++)
    {
        printf("Masukkan angka : ");
        scanf("%d", ptr + i);
    }
    printf("====================\n");
    printf("Faktor terkecil dari ");

    for (i = 0; i < n; i++)
    {
        printf(" %d ", *(ptr + i));
    }

    for (int i = 0; i < n - 1; i++)
    {
        int b = (*(ptr + i));
        int c = (*(ptr + i + 1));
        while ((*(ptr + i)) != *(ptr + i + 1))
        {
            while ((*(ptr + i)) < *(ptr + i + 1))
            {
                (*(ptr + i)) += b;
            }
            while ((*(ptr + i)) > *(ptr + i + 1))
            {
                *(ptr + i + 1) += c;
            }
        }
    }
    // printf("niai i adaadlh %i : \n", i);
    printf("adalah %d", *((ptr + i) - 1));
    free(ptr);
    return 0;
}
