#include <stdio.h>
#include <stdlib.h>

typedef struct Cvor{
    int podatak;
    struct Cvor *levi, *desni;
}Cvor;

int max(int a,int b){
    if (a>b) return a;
    else return b;
}

Cvor* dodajCvor(Cvor *koren, int podatak){
    if(koren==NULL){
        Cvor *novi = (Cvor *)malloc(sizeof(Cvor));
        novi->podatak = podatak;
        novi->levi = NULL;
        novi->desni = NULL;
        return novi;
    }else{
        if(podatak<koren->podatak){
            koren->levi = dodajCvor(koren->levi, podatak);
        }else{
            koren->desni = dodajCvor(koren->desni, podatak);
        }
        return koren;
    }
}

Cvor * dodajCvorIter(Cvor * koren, int podatak){
    // kreiramo novi cvor kao list
    Cvor *novi = (Cvor *)malloc(sizeof(Cvor));
    novi->podatak = podatak;
    novi->levi = NULL;
    novi->desni = NULL;
    // pronalazimo mesto za novi cvor
    Cvor * x = koren;
    Cvor * roditelj = NULL;  // cvor koji ce biti roditelj cvoru koji se dodaje
    while(x!=NULL){
       roditelj = x;
       if(podatak<x->podatak)
            x = x->levi;
       else
            x = x->desni;
    }
    if(roditelj==NULL)  // ubacujemo u prazno stablo
        koren = novi;
    else if(podatak<roditelj->podatak)
        roditelj->levi = novi;
    else
        roditelj->desni = novi;
    return koren;
}


void obrisiStablo(Cvor *koren){
  if(koren != NULL){
      obrisiStablo(koren->levi);
      obrisiStablo(koren->desni);
      free(koren);
  }
}

Cvor* pronadji(Cvor *koren, int podatak){
    if(koren!=NULL){
     if(koren->podatak==podatak){
        return koren;
     }else if(podatak<koren->podatak){
        return pronadji(koren->levi, podatak);
     }else
        return pronadji(koren->desni, podatak);
    }
    return NULL;
}

Cvor * pronadjiIter(Cvor *koren, int podatak){
   Cvor * tekuci = koren;
   while(tekuci!=NULL && tekuci->podatak!=podatak){
       if(podatak<=tekuci->podatak)
            tekuci = tekuci->levi;
       else
            tekuci = tekuci->desni;
   }
   return tekuci;
}


void ispisi(Cvor *koren) {
	if (koren!=NULL) {
		ispisi(koren->levi);
		printf("%d  ",koren->podatak);
		ispisi(koren->desni);
    }
}

int brojCvorova(Cvor *koren){
    if(koren==NULL)
        return 0;
    else
        return 1 + brojCvorova(koren->levi) + brojCvorova(koren->desni);
}

int brojListova(Cvor *koren){
    if(koren==NULL)
        return 0;
    else if(koren->levi==NULL && koren->desni==NULL)
        return 1;
    else
        return brojListova(koren->levi) + brojListova(koren->desni);
}

void ispisListova(Cvor *koren){
    if(koren==NULL)
        return;
    else if(koren->levi==NULL && koren->desni==NULL)
        printf("%4d",koren->podatak);
    else{
        ispisListova(koren->levi);
        ispisListova(koren->desni);
    }
}

int visina(Cvor *koren){
    if(koren==NULL)
        return 0;
    else
        return 1 + max(visina(koren->levi),visina(koren->desni));
}


void ispisiNaDubini(Cvor *koren,int dubina){
    if(koren==NULL)
        return;
    else if(dubina==0)
        printf("%d  ",koren->podatak);
    else{
        ispisiNaDubini(koren->levi,dubina-1);
        ispisiNaDubini(koren->desni,dubina-1);
    }
}

Cvor* obrisiCvor(Cvor *koren, int podatak){
        int pronadjen;
        Cvor *roditelj, *roditelj1, *x, *xnaslednik;
        if(koren==NULL){
          printf("\nStablo je prazno.");
          return koren;
        }
        x = NULL;
        // prolazak kroz stablo dok se ne nadje element koji se izbacuje
        Cvor *tek;
        tek = koren;
        pronadjen = 0;
        roditelj = NULL;
        while(tek!=NULL){
            if(tek->podatak==podatak){
                pronadjen = 1;
                x = tek;
                break;
            }else{
                roditelj = tek;
                if(podatak<tek->podatak)
                    tek = tek->levi;
                else
                    tek = tek->desni;
            }
        }
        // nakon petlje x pokazuje na cvor koji se izbacuje, a roditelj na njegovog roditelja
        if(!pronadjen){
            printf("\nElement se ne nalazi u stablu.");
            return koren;
        }
        // ako cvor koji se brise nema podstabla
        if(x->levi==NULL && x->desni==NULL){
            if(roditelj->levi==x)
                roditelj->levi = NULL;
            else
                roditelj->desni = NULL;
            free(x);
            return koren;
        }
         // ako cvor koji se brise ima samo desno podstablo
        if(x->levi==NULL && x->desni!=NULL){
            printf("\nIma desno");
            if(roditelj==NULL){//izbacije se koren
                printf("Brise se koren %d\n", x->podatak);
                koren = x -> desni;
            }else{
                if(roditelj->levi==x)
                    roditelj->levi = x->desni;
                else
                    roditelj->desni = x->desni;
            }
            free(x);
            return koren;
        }
        // ako cvor koji se brise ima samo levo podstablo
        if(x->levi!=NULL && x->desni==NULL){
            printf("\nIma levo");
            if(roditelj==NULL){//izbacije se koren
                printf("Brise se koren %d\n", x->podatak);
                koren = x -> levi;
            }else{
                if(roditelj->levi==x)
                    roditelj->levi = x->levi;
                else
                    roditelj->desni = x->levi;
            }
            free(x);
            return koren;
        }
        // ako cvor koji se brise ima oba podstabla
        if(x->levi!=NULL && x->desni!=NULL){
            printf("\nIma oba deteta");
            roditelj1 = x;
            xnaslednik = x->desni;
            // trazimo najmanjeg u desnom podstablu
            while(xnaslednik->levi!=NULL){
                roditelj1 = xnaslednik;
                xnaslednik = xnaslednik->levi;
            }
            x->podatak = xnaslednik->podatak;
            if(roditelj1!=x)  // usli smo barem jednom u while petlju i čvor koji se briše je levo od roditelja
                roditelj1->levi = xnaslednik->desni;
            else   // nijednom nismo usli u while petlju, cvor koji se briše je desno od roditelja
                roditelj1->desni = xnaslednik->desni;
            free(xnaslednik);
            return koren;
        }
        return koren;
}

int main(){
    Cvor * koren = NULL;
    koren = dodajCvor(koren, 5);
    koren = dodajCvor(koren, 3);
    koren = dodajCvor(koren, 9);
    koren = dodajCvor(koren, 1);
    koren = dodajCvorIter(koren, 4);
    ispisi(koren);
    return 0;
}



