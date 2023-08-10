//
//  main.c
//  Girilen Sayıyı ve Tersini Yazdıran Program
//
//  Created by Kaan Odabaş on 6.04.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sayi, ters = 0, kalan;
    
    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    // sayının tersini bulma
    while(sayi != 0) {
        kalan = sayi % 10;
        ters = ters * 10 + kalan;
        sayi /= 10;
    }

    printf("Sayi: %d\n", sayi);
    printf("Sayinin Tersi: %d\n", ters);

}
