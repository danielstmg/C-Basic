/*Nama File 	: 28JumDeret1.c*/
/*Deskripsi 	: menampilkan total dari deret 1 */
/*Pembuat   	: 24060120140051 - Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 22 Maret 2021*/

#include <stdio.h>/*header file*/
#include <stdlib.h>

/*Program Utama*/
int main(void)
{
    int num, n, k;
    printf("Masukkan banyak suku : ");
    scanf("%d", &n);
    printf("Total dari deret :");
    num = 1;
    k = 0;
    while (num <= n)
    {
        k = k + num;
        if (num == n)
        {
            printf(" %d ", num);
        }
        else
        {
            printf(" %d +", num);
        }
        num++;
    }
    printf("adalah %d", k);
    return 0;
}
