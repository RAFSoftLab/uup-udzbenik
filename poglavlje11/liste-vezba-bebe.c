#include <stdio.h>
#include <stdlib.h>

typedef struct Element {
    int mesec;
    int godina;
    int brDec;
    int brDev;
    struct Element* sledeci;
}Element;

Element* ubaciUListu(Element* glava, Element* novi) {
    Element* trenutni = glava;
    if (glava == NULL) {
        return novi;
    }
    else if (novi->godina > glava->godina || (novi->godina == glava->godina && novi->mesec >= glava->mesec )) {
        novi->sledeci = glava;
        return novi;
    }
    else {
        while (trenutni->sledeci && (trenutni->sledeci->godina > novi->godina ||
            (trenutni->sledeci->godina == novi->godina && trenutni->sledeci->mesec > novi->mesec))) {
            trenutni = trenutni->sledeci;
        }
        if (!trenutni->sledeci) {
            trenutni->sledeci = novi;
        }else{
            novi->sledeci = trenutni->sledeci;
            trenutni->sledeci = novi;
        }
    }
    return glava;
}

void ispisListe(Element* glava) {
    Element* trenutni = glava;
    while (trenutni) {
        printf("%2d  %d  %3d  %3d\n", trenutni->mesec, trenutni->godina, trenutni->brDec, trenutni->brDev);
        trenutni = trenutni->sledeci;
    }
}

Element* ucitavanje(Element* glava, char* fajlPutanja) {
    FILE* f = fopen(fajlPutanja, "r");
    int mesec, godina, brDec, brDev;
    while (fscanf(f, "%d%d%d%d", &mesec, &godina, &brDec, &brDev)==4) {
        Element* novi = (Element*) malloc(sizeof(Element));
        novi->godina = godina;
        novi->mesec = mesec;
        novi ->brDec = brDec;
        novi ->brDev = brDev;
        novi->sledeci = NULL;
        glava = ubaciUListu(glava, novi);
    }
    fclose(f);
    ispisListe(glava);
    return glava;
}

int brojMeseciIter(Element* glava, int br) {
    int sum = 0;
    Element* trenutni = glava;
    while (trenutni) {
        if ((trenutni->brDec + trenutni->brDev) > br)
            sum++;
        trenutni = trenutni->sledeci;
    }
    return sum;
}


int brojMeseciRek(Element* glava, int br) {
    if (glava==NULL) return 0;
    else if ((glava->brDec + glava->brDev) > br)
        return 1 + brojMeseciRek(glava->sledeci, br);
    else return brojMeseciRek(glava->sledeci, br);
}


Element* kopirajElement(Element* trenutni) {
    Element* novi = (Element*) malloc(sizeof(Element));
    novi->mesec = trenutni->mesec;
    novi->godina = trenutni->godina;
    novi->brDec = trenutni->brDec;
    novi->brDev = trenutni->brDev;
    novi->sledeci = NULL;
    return novi;
}

typedef struct PoGodini{
    int godina;
    int brDec;
    int brDev;
    struct PoGodini* sledeci;
}PoGodini;

// resenje sa sortiranom listom po godinama
void ispisiSortPoGodini(Element* glava) {
    if(glava==NULL) return;
    PoGodini * glavaPoGodini = NULL;
    int trenutnaGodina, prethodnaGodina, zbirZaGodinuDec, zbirZaGodinuDev;
    while(glava!=NULL){
        zbirZaGodinuDec = 0;
        zbirZaGodinuDev = 0;
        do{
            trenutnaGodina = glava->godina;
            zbirZaGodinuDec+=glava->brDec;
            zbirZaGodinuDev+=glava->brDev;
            prethodnaGodina = trenutnaGodina;
            glava  = glava->sledeci;
            if(glava!=NULL)
                trenutnaGodina = glava->godina;
        }while(glava!=NULL && trenutnaGodina==prethodnaGodina);
        PoGodini * novi = (PoGodini*) malloc(sizeof(PoGodini));
        novi->godina = prethodnaGodina;
        novi->brDec = zbirZaGodinuDec;
        novi->brDev = zbirZaGodinuDev;
        novi->sledeci=NULL;
        if(glavaPoGodini==NULL || glavaPoGodini->brDec + glavaPoGodini->brDev>novi->brDec + novi->brDev ){
            novi->sledeci = glavaPoGodini;
            glavaPoGodini= novi;
        }else{
            PoGodini * temp1 = glavaPoGodini;
            while(temp1->sledeci && temp1->sledeci->brDec + temp1->sledeci->brDev  < novi->brDec + novi->brDev)
                temp1 = temp1->sledeci;
            if(!temp1->sledeci){
                temp1->sledeci = novi;
            }
            else{
                novi->sledeci = temp1->sledeci;
                temp1->sledeci = novi;
            }
        }
    }
     // ispis po godini
    PoGodini * temp = glavaPoGodini;
    while(temp){
        printf("%d   %d   %d\n",temp->godina, temp->brDec, temp->brDev);
        temp = temp->sledeci;
    }
}

// resenje sa nesortiranom listom Element
void ispisiSortPoGodiniNesort(Element* glava) {
    PoGodini * glavaPoGodini = NULL;
    PoGodini * temp;
    Element* trenutni = glava;
    while (trenutni) {
        // proverimo da li se trenutna godina vec nalazi u listi po godinama
        int nalaziSe = 0;
        temp = glavaPoGodini;
        while(temp){
            if(temp->godina==trenutni->godina){
                nalaziSe = 1;
                break;
            }
            temp = temp->sledeci;
        }
        if(!nalaziSe){  // pravimo novi element i ubacujemo na pocetak
          PoGodini * novi = (PoGodini*) malloc(sizeof(PoGodini));
          novi->godina = trenutni->godina;
          novi->brDec = trenutni->brDec;
          novi->brDev = trenutni->brDev;
          novi->sledeci = glavaPoGodini;
          glavaPoGodini = novi;
        }else{ // dodajemo broj rodjenih na postojeci element jer je ista godina
           temp->brDec += trenutni->brDec;
           temp->brDev += trenutni->brDev;
        }
        trenutni = trenutni->sledeci;
    }
    // sortiranje nove liste po broju rodjenih
    PoGodini * glavaPoGodiniSortPoBroju = NULL;
    while(glavaPoGodini){
        PoGodini * novi = (PoGodini*) malloc(sizeof(PoGodini));
        novi->brDec = glavaPoGodini->brDec;
        novi->brDev = glavaPoGodini->brDev;
        novi->godina = glavaPoGodini->godina;
        novi->sledeci = NULL;
        temp = glavaPoGodini;
        glavaPoGodini = glavaPoGodini->sledeci;
        free(temp);
        if(glavaPoGodiniSortPoBroju==NULL || glavaPoGodiniSortPoBroju->brDec + glavaPoGodiniSortPoBroju->brDev > novi->brDec + novi->brDev ){
            novi->sledeci = glavaPoGodiniSortPoBroju;
            glavaPoGodiniSortPoBroju = novi;
        }else{
            PoGodini * temp1 = glavaPoGodiniSortPoBroju;
            while(temp1->sledeci && temp1->sledeci->brDec + temp1->sledeci->brDev<novi->brDec + novi->brDev)
                temp1 = temp1->sledeci;
            if(!temp1->sledeci){
                temp1->sledeci = novi;
            }
            else{
                novi->sledeci = temp1->sledeci;
                temp1->sledeci = novi;
            }
        }
    }
    // ispis po godini
    temp = glavaPoGodiniSortPoBroju;
    while(temp){
        printf("%d   %d   %d\n",temp->godina, temp->brDev, temp->brDec);
        temp = temp->sledeci;
    }
}

void ispisiMeni() {
    printf("izaberi opciju:\n");
    printf("1) ucitavanje Elementa\n");
    printf("2) ispis broja meseci u kome je rodjeno vise od odredjenog broja dece\n");
    printf("3) ispis broja rodjenih decaka i devojcica u jednoj godini sortirano po broju rodjenih\n");
    printf("4) izlaz iz programa i brisanje liste\n");
    printf("\n");
}


int main() {
    int opcija;
    int br;
//    char fajl[20];
    Element* glava = NULL;

    while(1) {
        ispisiMeni();
        scanf("%d", &opcija);
        switch (opcija) {
        case 1:
            glava = ucitavanje(glava, "grupa2.txt");
            printf("\n");
            break;
        case 2:
            printf("unesi broj:\n");
            scanf("%d", &br);
            printf("iteracija: %d\n", brojMeseciIter(glava, br));
            printf("rekurzija: %d\n", brojMeseciRek(glava, br));
            printf("\n");
            break;
        case 3:
            ispisiSortPoGodini(glava);
            printf("\n");
            break;
         case 4:
            while(!glava){
                Element* temp = glava;
                glava = glava->sledeci;
                free(temp);
            }
            return 0;
        }
    }
    return 0;
}

