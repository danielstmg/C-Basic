/*Nama File 	: TarifPLN.c*/
/*Deskripsi 	: menampilkan besar tarif listrik yang dikenakan*/
/*Pembuat   	: Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 14 Maret 2021, 20:42 */

#include <stdio.h>/*header file*/
#include <stdlib.h>/*header filw*/

/*Program Utama*/
int main()
{
/*Kamus*/
    int gol;/*golongan tarif*/
    int daya;/*pemakaian daya listrik*/

/*Algoritma*/
    printf("Masukkan golongan tarif : "),scanf("%d", &gol);/*menginput golongan tarif*/
    printf("Masukkan pemakaian daya listrik : "),scanf("%d", &daya);/*menginput pemakaian daya listrik*/

    if(gol == 1){
        if(daya >=100 && daya < 1000){
            printf("Tarif yang harus dibayar Rp %d", 1000*daya);/* output */
        }
        else if(daya >= 1000){
            printf("Tarif yang harus dibayar Rp %d", 1000*daya + ((daya*1000)*10/100));/* output */
        }
        else {
            printf("Tarif yang harus dibayar Rp 100000");/* output */
        }
    }
    else if(gol == 2){
        if(daya >= 100 && daya <1000){
            printf("Tarif yang harus dibayar Rp %d", 2000*daya);/* output */
        }
        else if(daya >= 1000){
            printf("Tarif yang harus dibayar Rp %d", 2000*daya + ((daya*2000)*10/100));/* output */
        }
        else {
            printf("Tarif yang harus dibayar Rp 200000");/* output */
        }
    }

  return 0;
}
