//
//  main.c
//  Mükemmel Sayı Bulucu
//
//  Created by Kaan Odabaş on 15.03.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf("Mükemmel sayı bulucuya hoşgeldin! Mükemmel sayı kendisi hariç tüm pozitif bölenleri toplanınca kendisi eden sayıya denir!\n");
    int a,i,b;
    b = 0;
    printf("Sayı giriniz:  \n");
    scanf("%d",&a);
    for (i=1; i<a; i++) {
        if (a%i==0){
            b+=i;
        }
    }
    if (b==a){
        printf("Girdiğiniz %d sayısı mükemmel bir sayıdır! \n",a);
    }
    else
        printf("%d sayısı mükemmel bir sayı değildir lütfen başka sayı giriniz! \n",a);
    
    
    
    return 0;
}
