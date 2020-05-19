#include <stdio.h>
#include <stdlib.h>

typedef struct Element{
    int podatak;
    struct Element * sledeci;
}Element;

Element* dodajNaPocetak(Element *glava, int broj){
    Element *novi = (Element*)malloc(sizeof(Element));
    novi->podatak = broj;
    novi->sledeci = glava;
    glava = novi;
    return glava;
}

void ispisi(Element *glava){
    Element *tekuci = glava;
    while(tekuci!=NULL){
        printf(" %d ->", tekuci->podatak);
        tekuci = tekuci->sledeci;
    }
    printf(" NULL");
}

Element* dodajNaKraj(Element *glava, int broj){
    Element *novi = (Element*)malloc(sizeof(Element));
    novi->podatak = broj;
    novi->sledeci = NULL;
    if(glava==NULL){
        glava = novi;
    }
    else{
        Element *tekuci = glava;
        while(tekuci->sledeci!=NULL){
            tekuci = tekuci->sledeci;
        }
        tekuci->sledeci = novi;
    }
    return glava;
}

// dodavanje novog elementa u uredjenu listu
Element* dodaj(Element *glava, int broj){
    Element *tekuci, *prethodni, *novi;
    tekuci = glava;
    prethodni = NULL;
    // pronalazimo mesto za novi element
    while(tekuci!=NULL && tekuci->podatak<broj){
        prethodni = tekuci;
        tekuci = tekuci->sledeci;
    }
    // nakon petlje novi element treba ubaciti izmedju prethodnog i tekuceg
    novi = (Element*)malloc(sizeof(Element));
    novi->podatak = broj;
    novi->sledeci = tekuci;
    if(prethodni==NULL) // ubacujemo na pocetak
        glava = novi;
    else
        prethodni->sledeci = novi;
    return glava;
}

Element* brisi(Element *glava, int broj){
    Element *tekuci, *prethodni;
    tekuci = glava;
    prethodni = NULL;
    // pronalazimo element koji se brise
    while(tekuci!=NULL && tekuci->podatak!=broj){
        prethodni = tekuci;
        tekuci = tekuci->sledeci;
    }
    if(tekuci!=NULL){ // tekuci je element koji se izbacuje
        if(prethodni==NULL) // izbacije se prvi element
            glava = glava->sledeci;
        else
            prethodni->sledeci = tekuci->sledeci;
        free(tekuci);
    }else{
        printf("Broj %d ne postoji u listi.", broj);
    }
    return glava;
}

Element* brisiSvaPojavljivanja(Element *glava, int broj){
    Element *tekuci, *prethodni;
    tekuci = glava;
    prethodni = NULL;
    // prolazimo kroz celu listu
    while(tekuci!=NULL){
        if (tekuci->podatak==broj){ // tekuci je element koji se izbacuje
            if(prethodni==NULL){ // brisemo prvi element
                glava = glava->sledeci;
                free(tekuci);
                tekuci = glava;
            }else{
                prethodni->sledeci = tekuci->sledeci;
                free(tekuci);
                tekuci = prethodni->sledeci;
            }
        }else{
            prethodni = tekuci;
            tekuci = tekuci->sledeci;
        }
    }
    return glava;
}

void ispisiRek(Element *glava){
    if(glava==NULL)
        printf(" NULL");
    else{
        printf(" %d ->", glava->podatak);
        ispisiRek(glava->sledeci);
    }
}

int brojPojavljivanja(Element *glava, int podatak){
  int br = 0;
  Element * tek = glava;
  while(tek!=NULL){
       if(tek->podatak==podatak)
           br++;
       tek = tek->sledeci;
  }
  return br;
}

int brojPojavljivanjaRek(Element *glava, int podatak){
  if(glava==NULL)
    return 0;
  else{
    if(glava->podatak==podatak)
        return 1+brojPojavljivanjaRek(glava->sledeci,podatak);
    else
        return brojPojavljivanjaRek(glava->sledeci,podatak);
  }
}

Element* dodajRek(Element *glava, int broj){
    Element * novi;
    if(glava == NULL || broj<glava->podatak){
        novi = (Element*)malloc(sizeof(Element));
        novi->podatak = broj;
        novi->sledeci = glava;
        return novi;
    }else{
        glava -> sledeci = dodajRek(glava->sledeci,broj);
        return glava;
    }
}

void brisanjeListePok(Element **glavaPok){
    Element * tekuci;
    while(*glavaPok!=NULL){
        tekuci = *glavaPok;
        *glavaPok = (*glavaPok)->sledeci;
        free(tekuci);
    }
}

Element* brisanjeListe(Element * glava){
    Element * tekuci;
    while(glava!=NULL){
        tekuci = glava;
        glava = glava->sledeci;
        free(tekuci);
    }
    return glava;
}

void ispisiOdPoslednjeg(Element *glava){
    if(glava==NULL)
        printf(" NULL");
    else{
        ispisiOdPoslednjeg(glava->sledeci);
        printf(" <- %d ", glava->podatak);
    }
}

Element* brisiNaIndeksu(Element * glava, int indeks){
    Element * tekuci, *prethodni;
    prethodni = NULL;
    tekuci = glava;
    if(indeks==0 && glava!=NULL){
        glava = glava->sledeci;
        free(tekuci);
    }else{
        for(int i=0;i<indeks && tekuci!=NULL;i++){
             prethodni = tekuci;
             tekuci = tekuci->sledeci;
        }
        if(tekuci!=NULL){
            prethodni->sledeci = tekuci->sledeci;
            free(tekuci);
        }
    }
    return glava;
}


Element* brisiNaIndeksuRek(Element * glava, int indeks){
    if(indeks==0 && glava!=NULL){
        Element* tekuci = glava;
        glava = glava->sledeci;
        free(tekuci);
        return glava;
    }else if(indeks>0 && glava!=NULL){
        glava->sledeci = brisiNaIndeksu(glava->sledeci, indeks-1);
    }
    return glava;
}

int main(){
    Element * glava = NULL;
    //printf("\nbroj pojavljivanja elementa 12: %d \n",brojPojavljivanja(glava,12));
 /*   glava = dodajNaPocetak(glava,8);
    glava = dodajNaPocetak(glava,15);
    glava = dodajNaPocetak(glava,12);
    glava = dodajNaPocetak(glava,3);
    glava = dodajNaKraj(glava,12);
    glava = dodajNaPocetak(glava,12);*/
    glava = dodajRek(glava,5);
    glava = dodajRek(glava,8);
    glava = dodajRek(glava,2);
    glava = dodajRek(glava,10);
    glava = dodajRek(glava,3);
    glava = dodajRek(glava,1);
    glava = dodajRek(glava,8);
    //ispisi(glava);
    /*printf("\nbroj pojavljivanja elementa 12: %d \n",brojPojavljivanja(glava,12));
    glava = brisiSvaPojavljivanja(glava,12);
    putchar('\n');
    ispisi(glava);
    putchar('\n');
    ispisiRek(glava);*/
    //brisanjeListePok(&glava);
    ispisi(glava);
    putchar('\n');
    glava = brisiNaIndeksuRek(glava,0);
    ispisi(glava);
    return 0;
}

