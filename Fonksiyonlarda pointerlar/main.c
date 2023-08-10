//
//  main.c
//  Fonksiyonlarda pointerlar
//
//  Created by Kaan Odabaş on 21.05.2023.
//

#include <stdio.h>

void sonucHesapla(int a,int b){
    printf("Sonuç: %d\n",2*a+3*b);
}
void sonucHesapla2(int a,int b){
    printf("Sonuc: %d\n",4*a+2*b);
}
void sonucHesapla3(int a,int b){
    printf("Sonuc: %d\n",3*a+7*b);
}

int main(int argc, const char * argv[]) {
    void (*fonkPtr[3])(int,int);
    fonkPtr[0]=sonucHesapla;
    fonkPtr[1]=sonucHesapla2;
    fonkPtr[2]=sonucHesapla3;
    
    (*fonkPtr[0])(3,5);
    (*fonkPtr[1])(2,6);
    (*fonkPtr[2])(4,2);
    
}
