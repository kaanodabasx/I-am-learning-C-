//
//  main.c
//  İki adet matris oluşturup bunların çarpımıyla yeni bir matris oluşturan program
//
//  Created by Kaan Odabaş on 9.05.2023.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int dizi1[5],dizi2[5],dizi3[5],i;
    srand(time(NULL));
    printf("DİZİ 1\n");
    for (i=0;i<5;i++){
        dizi1[i]=rand()%10;
        printf("%d ",dizi1[i]);
    }
    printf("\n\n\n");
    printf("DİZİ 2\n");
    for (i=0;i<5;i++){
        dizi2[i]=rand()%10;
        printf("%d ",dizi2[i]);
    }
    printf("\n\n\n");
    printf("DİZİ 3\n");
    for (i=0;i<5;i++){
        dizi3[i]=dizi1[i]*dizi2[i];
        printf("%d ",dizi3[i]);
    }
    printf("\n\n\n");
    
}
