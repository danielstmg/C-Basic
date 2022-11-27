/*Nama File 	: 30JumDeret3.c*/
/*Deskripsi 	: menampilkan total dari deret 3 */
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
        if (num % 2 == 0)
        {
            k -= num;
            printf(" %d +", num);
        }
        else
        {
            k += num;
            printf(" %d -", num);
        }
        num++;
    }
    printf("adalah %d", k);
    return 0;
}
