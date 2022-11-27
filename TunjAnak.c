/*Nama File 	: TunjAnak.c*/
/*Deskripsi 	: menghitung dan menampilkan besarnya tunjangan anak yang diberikan*/
/*Pembuat   	: Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 14 Maret 2021, 15:45 */

#include <stdio.h>/*header file*/
#include <stdlib.h>/*header file*/

/*Program Utama*/
int main()
{
/*Kamus*/
    int i;/*jumlah anak*/
    int g;/*gaji pokok*/

/*Algoritma*/
    printf("Masukkan jumlah anak : "),scanf("%d", &i);/*menginput jumlah anak*/
    printf("Masukkan gaji pokok : "),scanf("%d", &g);/*menginput gaji pokok*/

    if(i >0 && i <=3){
        printf("Maka tunjangan anak sebesar Rp %d", i*(g*10/100));/* output */
    }
    else{
        printf("Maka tunjangan anak sebesar Rp %d", 3*(g*10/100));/* output */
    }

  return 0;

}
