/*Nama File : jarakPBola.c*/
/*Deskripsi : menghitung jarak yang ditempuh sebuah benda yang mengalami gerak parabola*/

#include <stdio.h> /*Header File*/

int main() /*Program Utama*/
{
    /*Kamus*/
    int v0; /*kecepatan awal dalam meter per detik*/
    int t; /*waktu dalam detik*/
    const float g = 9.8; /*konstanta gravitasi dalam meter per detik kuadrat*/
    float y; /*jarak dalam meter*/

    /*Algoritma*/
    scanf("%d", &v0); /*input kecepatan awal*/
    scanf("%d", &t); /*input waktu*/
    y = v0 * t - (g * t * t)/2; /*proses menghitung jarak gerak parabola*/

    /*Output*/
    printf("Jaraknya adalah : %.3f", y); /*menampilkan jarak gerak parabola*/

    return 0;

}
