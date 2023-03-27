//
//  main.c
//  Girilen 5 Sayı Arasındaki En büyük ve En küçük Sayıyı Bulan Program
//
//  Created by Kaan Odabaş on 27.03.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,max,min,s1,s2,s3;
    printf("Lütfen 3 tane sayı giriniz, daha fazla ya da az sayı girerseniz hata verecektir.\n");
    printf("Sayı giriniz: \n");
    scanf("%d",&s1);
    printf("Sayı giriniz: \n");
    scanf("%d",&s2);
    printf("Sayı giriniz: \n");
    scanf("%d",&s3);
    if (s1 > s2){
        if (s1 > s3){
            if (s2>s3){
                printf("En büyük sayı: %d\n",s1);
                printf("En küçükük sayı: %d\n",s3);
            }
            else printf("En büyük sayı: %d\n",s1); printf("En küçük sayı: %d\n",s2);
        }
        else printf("En büyük sayı: %d\n",s3); printf("En küçük sayı: %d\n",s2);
        }
    else {
        if (s2 > s3){
            if (s3 > s1) printf("En büyük sayı: %d\n",s2); printf("En küçük sayı: %d\n",s1);
            if (s3 < s1) printf("En büyük sayı: %d\n",s2); printf("En küçük sayı: %d\n",s3);
        }
        else printf("En büyük sayı: %d\n",s3); printf("En küçük sayı: %d\n",s1);
    }
    }

