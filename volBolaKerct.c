/*Nama File : volBolaKerct.c*/
/*Deskripsi : menghitung volume bola dan volume kerucut*/

#include <stdio.h> /*Header File*/

int main() /*Program Utama*/
{
    /*Kamus*/
    int r; /*jari-jari lingkaran dalam meter*/
    const float phi = 3.1415; /*konstanta phi*/
    float vb; /*volume bola dalam meter kubik*/
    float vk; /*volume kerucut dalam meter kubik*/

    /*Algoritma*/
    scanf("%d", &r); /*input jari-jari*/
    vb = 4/3 * (phi * r * r * r); /*proses menghitung volume bola*/
    vk = vb / 2; /*proses menghitung volume kerucut*/

    /*Output*/
    printf("Volume Bola adalah : %.3f", vb);; /*menampilkan besar volume bola*/
    printf("\nVolume Kerucut adalah : %.3f", vk); /*menampilkan besar volume kerucut*/

    return 0;

}

