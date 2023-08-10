//
//  main.c
//  Pointer kullanarak girilen string ifadenin tersini yazdıran program
//
//  Created by Kaan Odabaş on 26.05.2023.
//   

#include <stdio.h>


void myStrlen(char *str,int *uzunluk){
    char *ptr=str;
    while (*ptr!='\0') {
        *uzunluk+=1;
        ptr++;
    }
}

void tersiniYazdir(char *str){
    int uzunluk=0;
    myStrlen(str, &uzunluk);
    printf("String %d adet ifade içermektedir.\n",uzunluk);
    char *ptr=str+uzunluk-1;
    while (ptr>=str) {
        printf("%c",*ptr);
        ptr--;
    }
}

int main(int argc, const char * argv[]) {
    char *kullaniciGirisi="\n kemal kilicdaroglu";
    tersiniYazdir(kullaniciGirisi);

}
