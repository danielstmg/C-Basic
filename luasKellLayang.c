/*Nama File : luasKellLayang.c*/
/*Deskripsi : menghitung luas dan keliling sebuah layang-layang*/

#include <stdio.h> /*Header File*/

int main() /*Program Utama*/
{
    /*Kamus*/
    int s1; /*sisi satu layang-layang dalam meter*/
    int s2; /*sisi dua layang-layang dalam meter*/
    int d1; /*diagonal satu layang-layang dalam meter*/
    int d2; /*diagonal dua layang-layang dalam meter*/
    float luas; /*luas layang-layang dalam meter kuadrat*/
    float kell; /*keliling layang-layang dalam meter*/

    /*Algoritma*/
    scanf("%d", &s1); /*input sisi satu*/
    scanf("%d", &s2); /*input sisi dua*/
    scanf("%d", &d1); /*input diagonal satu*/
    scanf("%d", &d2); /*input diagonal dua*/
    luas = (d1 * d2) / 2; /*proses menghitung luas layang-layang*/
    kell = 2 * (s1 + s2); /*proses menghitung keliling layang-layang*/

    /*Output*/
    printf("Luas layang-layang adalah : %.3f", luas);; /*menampilkan besar luas layang-layang*/
    printf("\nKeliling layang-layang adalah : %.3f", kell); /*menampilkan besar keliling layang-layang*/

    return 0;

}

