//
//  main.c
//  Hesap Makinesi
//
//  Created by Kaan Odabaş on 8.04.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int c;
    float a,b;
    printf("TOPLAMA İÇİN 1\nÇIKARMA İÇİN 2\nBÖLME İÇİN 3\nÇARPMA İÇİN 4\n");
    printf("YAPMAK İSTEDİĞİNİZ İŞLEMİ TUŞLAYINIZ:  ");
    scanf("%d",&c);
    printf("İlk sayıyı giriniz: \n");
    scanf("%f",&a);
    printf("İkinci sayıyı giriniz: \n");
    scanf("%f",&b);
    
    if (c >= 1  && c <= 5){
        if (c == 1){
            printf("Toplama işleminin sonucu %.2f + %.2f = %.2f\n",a,b,a+b);
        }
        else if (c == 2){
            printf("Çıkarma işleminin sonucu %.2f - %.2f = %.2f\n",a,b,a-b);
        }
        else if (c == 3){
            printf("Bölme işleminin sonucu %.2f / %.2f = %.2f\n",a,b,a/b);
        }
        else if (c == 4){
            printf("Çarpma işleminin sonucu %.2f x %.2f = %.2f\n",a,b,a*b);
        }
    }
    else {
        printf("Lütfen yapmak istediğiniz işlemi doğru ifade edin!!\n");
    }
}
