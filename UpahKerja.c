/*Nama File 	: UpahKerja.c*/
/*Deskripsi 	: menghitung dan menampilkan upah kerja yang diterima*/
/*Pembuat   	: Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 14 Maret 2021, 14:30 */

#include <stdio.h>/*header file*/
#include <stdlib.h>/*header file*/

/*Program Utama*/
int main()
{
/*Kamus*/
    int gol;/*golongan pekerja*/
    int jamker;/*lama jam kerja*/

/*Algoritma*/
    printf("Masukkan golongan : "),scanf("%d", &gol);/*menginput golongan pekerja*/
    printf("Masukkan jam kerja : "),scanf("%d", &jamker);/*menginput lama jam kerja*/

    if(gol == 1){
        if(jamker <= 40){
            printf("Upah yang diterima: %d", jamker*1000);/* output */
        }
        else{
            printf("Upah yang diterima: %d", 40000 + (jamker-40)*1500);/* output */
        }
    }
    else if (gol == 2){
        if(jamker <= 40){
            printf("Upah yang diterima: %d", jamker*1500);/* output */
        }
        else{
            printf("Upah yang diterima: %d", 60000 + (jamker-40)*2250);/* output */
        }
    }
    else if(gol == 3){
        if(jamker <= 40){
            printf("Upah yang diterima: %d", jamker*2000);/* output */
        }
        else{
            printf("Upah yang diterima: %d", 80000 + (jamker-40)*3000);/* output */
        }
    }
    else if (gol == 4){
        if(jamker <= 40){
            printf("Upah yang diterima: %d", jamker*2500);/* output */
        }
        else{
            printf("Upah yang diterima: %d", 100000 + (jamker-40)*3750);/* output */
        }
    }

  return 0;
}
