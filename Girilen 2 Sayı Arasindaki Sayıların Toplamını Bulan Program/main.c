//
//  main.c
//  Girilen 2 Sayı Arasindaki Sayıların Toplamını Bulan Program
//
//  Created by Kaan Odabaş on 24.03.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x,y,i,toplam;
    printf("Lütfen küçük sayıyı giriniz. \n");
    scanf("%d",&x);
    printf("Lütfen büyük sayıyı giriniz. \n");
    scanf("%d",&y);
    
    toplam = 0;
    
    if (x<y){
        for ( i=x;i<=y;i++){
            toplam += i;
        }
        printf("%d ile %d arasındaki sayıların toplamı %d dir.(sınırlar dahil)\n",x,y,toplam);
    }
    else {
        printf("Lütfen sayıları doğru sırada giriniz.\n");
    }
}
