/*Nama File 	: 29JumDeret2.c*/
/*Deskripsi 	: menampilkan total dari deret 2 */
/*Pembuat   	: 24060120140051 - Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 22 Maret 2021*/

#include <stdio.h>/*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void)
{
    int num, n, k, deret;
    printf("Masukkan banyak suku : ");
    scanf("%d", &n);
    printf("Total dari deret :");
    num = 1;
    k = 0;
    while (num <= n)
    {
        deret = (2 * num) - 1;
        if (num == n)
        {
            printf(" %d ", deret);
        }
        else
        {
            printf(" %d +", deret);
        }
        k = k + deret;
        num++;
    }
    printf("adalah %d", k);
    return 0;
}
