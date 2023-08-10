//
//  main.c
//  Belli Oranda Göç Alan 2 Şehrin Yıllar İçindeki İstatistiklerini Veren Program
//
//  Created by Kaan Odabaş on 2.04.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf("Şehirlerin aldıkları göçe göre istatistiklerini veren programa hoşgeldiniz!!\n");
    int y1,j;
    float i1,i2;
    long int sehir1,sehir2,o1,o2;
    char sehir1n[20],sehir2n[20];
    printf("1.Şehri ve nüfusu sırasıyla yazınız.\n");
    printf("Şehir adı: \n");
    scanf("%s",sehir1n);
    printf("%s şehrinin mevcut nüfusu kaçtır ?\n",sehir1n);
    scanf("%ld",&sehir1);
    printf("2.Şehri ve nüfusu sırasıyla yazınız.\n");
    printf("Şehir adı: \n");
    scanf("%s",sehir2n);
    printf("%s şehrinin mevcut nüfusu kaçtır ?\n",sehir2n);
    scanf("%ld",&sehir2);
    
    printf("%s şehrinin yıllık büyüme oranı kaç ?\n",sehir1n);
    printf("Yıllık büyüme oranı: \n");
    scanf("%f",&i1);
   
    printf("%s şehrinin yıllık büyüme oranı kaç ?\n",sehir2n);
    printf("Yıllık büyüme oranı: \n");
    scanf("%f",&i2);
    
    printf("Son olarak bu şehirlerin kaç yıl sonraki nüfuslarını bulmak istiyorsunuz: \n");
    scanf("%d",&y1);
    
    for (j=1;j<=y1;j++){
        o1 = (sehir1*i1)/100;
        o2 = (sehir2*i2)/100;
        sehir1 = sehir1 + o1;
        sehir2 = sehir2 + o2;
    }
    printf("%s şehrinin %.2f yıllık büyüme oranıyla %d yıl sonraki nüfusu %ld dir.\n",sehir1n,i1,y1,sehir1);
    printf("%s şehrinin %.2f yıllık büyüme oranıyla %d yıl sonraki nüfusu %ld dir.\n",sehir2n,i2,y1,sehir2);

}

