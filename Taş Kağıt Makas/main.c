//
//  main.c
//  Taş Kağıt Makas
//
//  Created by Kaan Odabaş on 24.03.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    printf("Taş Kağıt Makas oyununa hoşgeldiniz.\n");
    int c,sc=0,sp=0,p;
    while (sc <3 && sp <3){
        printf("\nTaş için 1,\nKağıt için 2,\nMakas için 3 yazınız. \n");
        scanf("%d",&p);
        
        srand(time(NULL));
        c = rand()%3 + 1;
        if (c==1){
            if (p==1) printf("Kullanıcı: Taş, PC: Taş - Beraberlik!!\n Skor >> Kullanıcı %d vs %d Bilgisayar!!\n",sp,sc);
            else if (p==2) {
                printf("Kullanıcı: Kağıt, PC: Taş - Kullanıcı Kazandı!!\n");
                sp+=1;
                printf("Skor >>>>> Kullanıcı %d vs %d Bilgisayar <<<<<<\n",sp,sc);
            }
            else if (p==3){
                printf("Kullanıcı: Makas, PC: Taş - Bilgisayar Kazandı!!\n");
                sc+=1;
                printf("Skor >>>>> Kullanıcı %d vs %d Bilgisayar <<<<<<\n",sp,sc);
            }}
        if (c==2){
            if (p==2) printf("Kullanıcı: Kağıt, PC: Kağıt - Beraberlik!!\n >> Kullanıcı %d vs %d Bilgisayar!!",sp,sc);
            else if (p==1) {
                printf("Kullanıcı: Taş, PC: Kağıt - Bilgisayar Kazandı!!\n");
                sc+=1;
                printf("Skor >>>>> Kullanıcı %d vs %d Bilgisayar <<<<<<\n",sp,sc);
            }
            else if (p==3) {
                printf("Kullanıcı: Makas , PC: Kağıt - Kullanıcı Kazandı!!\n");
                sp+=1;
                printf("Skor >>>>> Kullanıcı %d vs %d Bilgisayar <<<<<<\n",sp,sc);
            }}
        if (c==3){
            if (p==3) printf("Kullanıcı: Makas, PC: Makas - Beraberlik!!\n >> Kullanıcı %d vs %d Bilgisayar!!\n",sp,sc);
            else if (p==1) {
                printf("Kullanıcı: Taş, PC: Makas - Kullanıcı Kazandı!!\n");
                sp+=01;
                printf("Skor >>>>> Kullanıcı %d vs %d Bilgisayar <<<<<<\n",sp,sc);
            }
            else if (p==2) {
                printf("Kullanıcı: Kağıt, PC: Makas Bilgisayar Kazandı!!\n");
                sc+=1;
                printf("Skor >>>>> Kullanıcı %d vs %d Bilgisayar <<<<<<\n",sp,sc);
            }}
                    
                }
    if (sc == 3){
        printf("Oyun bitti kazanan %d - %d lik skorla BİLGİSAAYAR!!\n",sc,sp);
    }
    else {
        printf("Oyun bitti kazanan %d - %d lik skorla KULLANICI!!\n",sp,sc);
    }
                }
