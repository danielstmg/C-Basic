/*Nama File 	: 32JumDeret21_dinamis.c*/
/*Deskripsi 	: menghitung jumlah deret 2 dengan array */
/*Pembuat   	: 24060120140051 - Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 22 Maret 2021*/

#include <stdio.h>/*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void)
{
    int *ptr, n, i, sum;
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
    sum = 0;
    printf("Total dari deret");
    for (i = 0; i < n; i++)
    {
        *(ptr + i) = (2 * (*(ptr + i))) - 1;
        if (i == (n - 1))
        {
            printf(" %d ", *(ptr + i));
        }
        else
        {
            printf(" %d +", *(ptr + i));
        }

        sum = sum + (ptr[i]);
    }
    printf("adalah : %d", sum);
    free(ptr);
    return 0;
}
