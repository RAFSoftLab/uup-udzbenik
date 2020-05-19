#include <stdio.h>
#include <stdlib.h>

typedef struct Element{
	int podatak;
	struct Element *sledeci;
	struct Element *prethodni;
}Element;


typedef struct ListaDvostruko{
    Element *glava;
    Element *poslednji;
}ListaDvostruko;

void ispisiOdPocetka(ListaDvostruko ld){
    Element *tekuci = ld.glava;
    while(tekuci!=NULL){
        printf("%d ", tekuci->podatak);
        tekuci = tekuci->sledeci;
    }
}

void ispisiOdKraja(ListaDvostruko ld){
    Element *tekuci = ld.poslednji;
    while(tekuci!=NULL){
        printf("%d ", tekuci->podatak);
        tekuci = tekuci->prethodni;
    }
}

ListaDvostruko dodajNaKraj(ListaDvostruko ld, int broj){
    Element *novi = (Element*)malloc(sizeof(Element));
    novi->podatak = broj;
    novi->sledeci = NULL;
    if(ld.glava==NULL){
        ld.glava = novi;
    }
    if(ld.poslednji!=NULL){
        ld.poslednji->sledeci = novi;
        novi->prethodni = ld.poslednji;
    }
    ld.poslednji = novi;
    return ld;
}

// dodavanje novog elementa u uredjenu listu
ListaDvostruko dodaj(ListaDvostruko ld, int broj){
    Element*  novi = (Element*)malloc(sizeof(Element));
    novi->podatak = broj;
    if(ld.glava==NULL){  // dodajemo u praznu listu
        novi->prethodni = NULL;
        novi->sledeci=NULL;
        ld.glava = novi;
        ld.poslednji = novi;
        return ld;
    }
    if(broj>=ld.poslednji->podatak){ // dodajemo na kraj
        ld.poslednji->sledeci = novi;
        novi->prethodni = ld.poslednji;
        novi->sledeci=NULL;
        ld.poslednji = novi;
        return ld;
    }
    Element *tekuci;
    tekuci = ld.glava;
    // pronalazimo mesto za novi element
    while(tekuci!=NULL && tekuci->podatak<broj){
        tekuci = tekuci->sledeci;
    }
   // nakon petlje novi element treba ubaciti izmedju tekuceg i njegovog prethodnog
    novi->sledeci = tekuci;
    if(tekuci->prethodni==NULL){ // ubacujemo na pocetak neprazne liste
         ld.glava = novi;
         novi->prethodni = NULL;
    }else{  // ubacujemo u sredinu
        tekuci->prethodni->sledeci = novi;
        novi->prethodni = tekuci->prethodni;
    }
    tekuci->prethodni = novi;
    return ld;
}

int main(){
    ListaDvostruko ld;
    ld.glava = NULL;
    ld.poslednji = NULL;
    ld = dodaj(ld,6);
    ld = dodaj(ld,9);
    ld = dodaj(ld,3);
    ld = dodaj(ld,12);
    ld = dodaj(ld,8);
    printf("Ispis od pocetka\n");
    ispisiOdPocetka(ld);
    printf("\nIspis od kraja\n");
    ispisiOdKraja(ld);
    return 0;
}

