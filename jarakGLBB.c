/*Nama File : jarakGLBB.c*/
/*Deskripsi : menghitung jarak yang ditempuh sebuah benda yang mengalami gerak lurus berubah beraturan*/

#include <stdio.h> /*Header File*/

int main() /*Program Utama*/
{
    /*Kamus*/
    int v0; /*kecepatan awal dalam meter perdetik*/
    int t; /*waktu dalam detik*/
    int a; /*percepatan dalam meter per detik kuadrat*/
    float S; /*jarak dalam meter*/

    /*Algoritma*/
    scanf("%d", &v0); /*input kecepatan awal*/
    scanf("%d", &t); /*input waktu*/
    scanf("%d", &a); /*input percepatan*/
    S = v0 * t + (a * t * t) /2 ; /*proses hitung mencari jarak GLBB*/

    /*Output*/
    printf("Jaraknya adalah : %.3f", S); /*menampilkan jarak GLBB*/

    return 0;

}

