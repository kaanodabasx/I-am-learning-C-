//
//  main.c
//  Pointer kullanarak string dizideki boşluk sayısını bulan program
//
//  Created by Kaan Odabaş on 26.05.2023.
//

#include <stdio.h>


void boslukBulucu(char *str,int *boslukSayisi){
    char *ptr = str;
    while (*ptr != '\0'){
        if (*ptr == ' '){
            *boslukSayisi+=1;
        }
        ptr++;
    }
}

int main(int argc, const char * argv[]) {
    char *kullaniciGirisi="SANA SÖZ HER ŞEY ÇOK GÜZEL OLACAKKK";
    int boslukSayisi=0;
    boslukBulucu(kullaniciGirisi, &boslukSayisi);
    printf("Girdiğiniz string ifadede %d adet boşluk vardır.\n",boslukSayisi);
}
