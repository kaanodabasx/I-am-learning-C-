//
//  main.c
//  Pointer kullanarak rastgele bir integer dizi üretip tersini yazdıran program
//
//  Created by Kaan Odabaş on 4.06.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void diziOlustur(int *dizi,int elemanSayisi){
    srand(time(NULL));
    int *ptr;
    for(ptr=dizi;ptr<dizi+elemanSayisi;ptr++){
        *ptr=rand()%500;
    }
}

void diziyiYazdir(int *dizi,int elemanSayisi){
    int *ptr;
    for(ptr=dizi;ptr<dizi+elemanSayisi;ptr++){
        printf("%d ",*ptr);
    }
    printf("\n");
}

void tersOlustur(int *yeni,int *eski,int *son){
    int *ptr= son -1;
    while (ptr >= eski) {
        *yeni = *ptr;
        yeni++;
        ptr--;
    }
}

int main(int argc, const char * argv[]) {
    int diziA[8];
    int diziB[8];
    printf("ilk dizi: \n");
    diziOlustur(diziA, 8);
    diziyiYazdir(diziA, 8);
    tersOlustur(diziB , diziA , diziA + 8);
    printf("ilk dizinin tersi: \n");
    diziyiYazdir(diziB, 8);
}
