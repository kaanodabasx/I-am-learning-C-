//
//  main.c
//  Pointer kullanarak dizide min ve max elemanlarını hesaplama
//
//  Created by Kaan Odabaş on 24.05.2023.
//

#include <stdio.h>
#s


void diziyiDoldur(int *dizi,int elemanSayisi){
    srand(time(NULL));
    int *ptr;
    for (ptr=dizi;ptr<dizi+elemanSayisi;ptr++){
        *ptr=rand()%100;
    }

}

void diziyiYazdir(int *dizi,int elemanSayisi){
    int *ptr;
    for (ptr=dizi;ptr<dizi+elemanSayisi;ptr++){
        printf("%d ",*ptr);
    }
    printf("\n");
}

void maxMinBul(int *dizi,int elemanSayisi,int *max,int *min){
    int *ptr=dizi;
    *max = *ptr;
    *min = *ptr;
    ptr++;
    
    for(;ptr<dizi+elemanSayisi;ptr++){
        if(*ptr > *max){
            *max=*ptr;
        }
        else if(*ptr<*min){
            *min=*ptr;
        }
    }
}

int main(int argc, const char * argv[]) {
    int dizi[10];
    int max,min;
    diziyiDoldur(dizi, 10);
    diziyiYazdir(dizi, 10);
    maxMinBul(dizi, 10, &max, &min);
    printf("Dizinin en büyük elemanı: %d , en küçük elemanı : %d\n",max,min);
}
