/*Nama File 	: DeretPrima.c*/
/*Deskripsi  	: Menampilkan bilangan prima sampai bilangan N*/
/*Pembuat   	: Daniel Sahat Parulian Situmeang - 24060120140051*/
/*Tgl Pembuatan	: 22 Maret 2021, 21:59*/

#include <stdio.h> /*Header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int N; /*Bilangan N*/
    int i; /*counter*/
    int j; /*counter*/
    int k; /*cek prima*/

	/*Algoritma*/
    printf("Masukkan Bilangan N : "),scanf("%d", &N); /* menginput nilai N */

    if(N<=0) { /* validasi */
        printf("Masukan Harus Lebih Besar Daripada 0"); /* Output */
    }
    else { /* N>0 */
        k=0; /* inisialisasi */
        for (i=1; i<=N; i++)
        {
            for (j=1; j<=i; j++)
            {
                if(i%j==0)
                {
                    k++;
                }
            }
            if (k==2)
            {
                printf("%d ",i); /* Output */
            }
            k=0; /* reset */
        }
    }

  return 0;
}

