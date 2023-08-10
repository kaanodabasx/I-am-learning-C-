//
//  main.c
//  Pointer kullanarak dizilerde ortalama ve toplam değer bulma
//
//  Created by Kaan Odabaş on 26.05.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void diziOlustur(int *dizi,int elemanSayisi){
    srand(time(NULL));
    int *ptr;
    for (ptr=dizi;ptr<dizi+elemanSayisi;ptr++){
        *ptr=rand()%100;
    }
}
void diziYazdir(int *dizi,int elemanSayisi){
    int *ptr;
    for (ptr=dizi;ptr<dizi+elemanSayisi;ptr++){
        printf("%d ",*ptr);
    }
    printf("\n");
}
void toplamVeOrtalamaBulucu(int *dizi,int elemanSayisi,int *toplam,int *ortalama){
    int *ptr;
    for (ptr=dizi;ptr<dizi+elemanSayisi;ptr++){
        *toplam += *ptr;
    }
    *ortalama=*toplam/elemanSayisi;
    printf("Toplam: %d, Eleman Sayısı: %d, Ortalama: %d\n\n",*toplam,elemanSayisi,*ortalama);
}


int main(int argc, const char * argv[]) {
    int dizi[10];
    int ortalama=0,toplam=0;
    printf("Dizi: ");
    diziOlustur(dizi, 10);
    diziYazdir(dizi, 10);
    toplamVeOrtalamaBulucu(dizi, 10, &toplam,&ortalama);
}
