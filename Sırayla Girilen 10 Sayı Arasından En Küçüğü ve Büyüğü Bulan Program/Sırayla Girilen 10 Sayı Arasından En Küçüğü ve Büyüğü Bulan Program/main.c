//
//  main.c
//  Sırayla Girilen 10 Sayı Arasından En Küçüğü ve Büyüğü Bulan Program
//
//  Created by Kaan Odabaş on 2.04.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,max,min,sayi;
    for (i=1;i<=10;i++){
        printf("Bir sayı giriniz: \n");
        scanf("%d",&sayi);
        if (i==1) {max = sayi; min = sayi;}
        if (sayi>max){ max = sayi;}
        if (sayi<min){ min = sayi;}
    }
    printf("EN BÜYÜK SAYI: %d \n EN KÜÇÜK SAYI: %d \n",max,min);
}
