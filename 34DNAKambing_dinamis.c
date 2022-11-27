/*Nama File 	: 34DNAKambing_dinamis.c*/
/*Deskripsi 	: menghitung jumlah saudara dan tidak saudara dari DNA kambing */
/*Pembuat   	: 24060120140051 - Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 22 Maret 2021*/

#include <stdio.h>/*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void)
{
    int *ptr, n, i, j, sibling, nonSibling;
    printf("Masukkan jumlah blok : ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memori ga cukup bos");
    }

    for (i = 0; i < n; i++)
    {
        printf("Masukkan DNA kambing ke-%d : ", i + 1);
        scanf("%d", ptr + i);
    }
    printf("====================\n");
    printf("Total dari deret");
    for (i = 0; i < n; i++)
    {
        sibling = 0;
        nonSibling = 0;

        // menghitung hubungan dengan dna kambing yang lain
        for (j = 0; j < n; j++)
        {

            // jika dengan dirinya sendiri maka kita lewat
            if (i == j)
            {
                continue;
            }

            if (abs((*(ptr + i)) - (*(ptr + j))) < 3)
            {
                // Saudara
                sibling++;
            }
            else
            {
                // Bukan saudara
                nonSibling++;
            }
        }
        printf("Kambing ke-%d\n", i + 1);
        printf("Jumlah saudara %d\n", sibling);
        printf("Jumlah bukan saudara %d\n\n", nonSibling);
    }

    free(ptr);
    return 0;
}
