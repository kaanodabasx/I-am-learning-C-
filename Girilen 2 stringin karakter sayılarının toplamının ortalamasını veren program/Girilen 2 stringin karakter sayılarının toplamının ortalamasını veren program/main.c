//
//  main.c
//  Girilen 2 stringin karakter sayılarının toplamının ortalamasını veren program
//
//  Created by Kaan Odabaş on 12.05.2023.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str1[50],str2[50];
    int toplam1,toplam2,toplam;
    
    printf("string giriniz: \n");
    scanf("%s",str1);
    printf("string giriniz: \n");
    scanf("%s",str2);
    
    
    toplam1=strlen(str1);
    toplam2=strlen(str2);
    toplam=(toplam2+toplam1)/2;
    
    printf("%s %s stringlerinin ortalama karakter sayısı %d dir.\n",str1,str2,toplam);
}
