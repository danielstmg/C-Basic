/*Nama File : gayaSentr.c*/
/*Deskripsi : menghitung gaya sentripetal yang dialami benda*/

#include <stdio.h> /*Header File*/

int main() /*Program Utama*/
{
    /*Kamus*/
    int m; /*massa dalam kilogram*/
    int v; /*kecepatan dalam meter per detik*/
    int r; /*jati-jari dalam meter*/
    float F; /*gaya dalam newton*/

    /*Algoritma*/
    scanf("%d", &m); /*input massa*/
    scanf("%d", &v); /*input kecepatan*/
    scanf("%d", &r); /*input jari-jari*/
    F = m * (v * v / r); /*proses menghitung gaya yang terjadi*/

    /*Output*/
    printf("Besar gayanya adalah : %.3f", F); /*menampilkan besar gaya yang terjadi*/

    return 0;

}

