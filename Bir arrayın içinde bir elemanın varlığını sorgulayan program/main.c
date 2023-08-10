//
//  main.c
//  Bir arrayın içinde bir elemanın varlığını sorgulayan program
//
//  Created by Kaan Odabaş on 9.05.2023.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(int argc, const char * argv[]) {
    int dizi[10],i,deger,sonuc;
    srand(time(NULL));
    for (i=0;i<10;i++){
        dizi[i]=rand()%100;
        printf("%d ",dizi[i]);
    }
    printf("\nLütfen aranacak olan değeri giriniz: \n");
    scanf("%d",&deger);
    for (i=0;i<10;i++){
        if (dizi[i] == deger){
            sonuc=1;
            break;
        }
    }
    if (sonuc) {
        printf("Değer bulundu!\n");
    }
    else {
        printf("Değer bulunamadı!\n");
    }
}
