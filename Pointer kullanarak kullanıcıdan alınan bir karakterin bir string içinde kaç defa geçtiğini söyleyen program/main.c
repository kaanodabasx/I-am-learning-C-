//
//  main.c
//  Pointer kullanarak kullanıcıdan alınan bir karakterin bir string içinde kaç defa geçtiğini söyleyen program
//
//  Created by Kaan Odabaş on 27.05.2023.
//

#include <stdio.h>

int kackeregeciyor(char *str,char aranandeger,char degistirilecekdeger){
    int sayac=0;
    char *ptr=str;
    while(*ptr){
        if (*ptr == aranandeger){
            *ptr = degistirilecekdeger;
            sayac +=1;
        }
        ptr++;
    }
    return sayac;
    
}

int main(int argc, const char * argv[]) {
    char karakterdizisi[] = "seni çok seviyorum bıcır bıcır böcek";
    int sonuc = kackeregeciyor(karakterdizisi, 'e' , '*');
    printf("Aradığınız karakter dizide %d kere geçmektedir\n",sonuc);
    puts(karakterdizisi);
}
