//
//  main.c
//  Bilgisayarın Tuttuğu Sayıyı Tahmin Etme Oyunu
//
//  Created by Kaan Odabaş on 3.04.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    int i=1,c,tahmin;
    srand(time(NULL));
    c = rand()%99 + 1;
    printf("1 ile 100 arasında bilgisayarın tuttuğu sayıyı 10 hamlede bilme oyununa hoşgeldiniz.\n");
    while (i!=10){
        printf("Tahminini giriniz: \n");
        scanf("%d",&tahmin);
        if (tahmin==c) { printf("Sayıyı bildiniz! Tahmininiz: %d, Sayı: %d \n",tahmin,c); i=10;}
        else if (tahmin < c) { printf("Lütfen daha büyük bir sayı deneyin.\n"); i++;}
        else if (tahmin > c) { printf("Lütfen daha küçük bir sayı deneyin.\n"); i++;}
    }
}
