/*Nama File 	: Kalk-SS.c*/
/*Deskripsi 	: sebuah kalkulator super sederhana dimana pilihan operasinya menggunakan character*/
/*Pembuat   	: Daniel Sahat Parulian Situmeang*/
/*Tgl Pembuatan	: 06 Maret 2021, 20:41 */

#include <stdio.h>/*header file*/
#include <stdlib.h>/*header file*/

/*Program Utama*/
int main()
{
/*Kamus*/
    int iA;/*bilangan pertama*/
    int iB;/*bilangan kedua*/
    char huruf;/*pilihan operasi*/

/*Algoritma*/
    printf("Masukkan pilihan (a-f): "),scanf("%c", &huruf);/*menginput pilihan operasi*/
    printf("Masukkan bilangan pertama : "),scanf("%d", &iA);/*menginput bilangan pertama*/
    printf("Masukkan bilangan kedua : "),scanf("%d", &iB);/*menginput bilangan kedua*/

    if(huruf == 'a'){
        printf("%d",iA+iB);/* Output */
    }
    else if(huruf == 'b'){
        printf("%d",iA-iB);/* Output */
    }
    else if(huruf == 'c'){
        printf("%d",iA*iB);/* Output */
    }
     else if(huruf == 'd'){
        printf("%.3f",(float)iA/iB);/* Output */
    }
     else if(huruf == 'e'){
        printf("%d",iA/iB);/* Output */
    }
     else if(huruf == 'f'){
        printf("%d",iA%iB);/* Output */
    }
    else{
        printf("Bukan pilihan menu yang benar");/* Output */
    }

  return 0;

}
