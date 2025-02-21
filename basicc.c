#include <stdio.h>

int main (){
    char barang[1000];
    int harga,jumlah,cuan;
    printf("==========================\n"
           "||Simulasi Jualan Barang||\n"
           "==========================\n");
    
    printf("Masukan nama barang [>= 1 kata]: ");
    scanf("%[^\n]", barang); getchar();
    printf("Masukan harga barang: "); 
    scanf("%d", &harga); getchar();
    printf("Masukan jumlah barang: ");
    scanf("%d", &jumlah); getchar();
    cuan = harga*jumlah;
    printf("\nJadi barang yang terjual adalah %d %s dan mendapatkan keuntungan %d!\n", jumlah, barang,cuan);
    printf("Tekan enter untuk mengakhiri..."); getchar();

    return 0;
    
}