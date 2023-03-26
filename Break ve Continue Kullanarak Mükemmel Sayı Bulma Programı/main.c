//
//  main.c
//  Break ve Continue Kullanarak Mükemmel Sayı Bulma Programı
//
//  Created by Kaan Odabaş on 22.03.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //MÜkemmel sayı kendisi hariç tüm pozitif bölenleri toplandığında kendisini veren sayıdır.
    int i=1,sayi,toplam=0;
    printf("Lütfen test etmek istediğiniz sayıyı giriniz: \n");
    scanf("%d",&sayi);
    
    while (1){
        if ( i == sayi){
            break;
        }
        if ( sayi % i == 0){
            toplam+=i;
        }
        i++;
    }
    
    if ( toplam == sayi){
        printf("Girdiğiniz %d sayısı bir mükemmel sayıdır. \n",sayi);
    }
    else{
        printf("Girdiğiniz %d sayısı bir mükemmel sayı değildir. \n",sayi);
    }
    return 0;
}
