#include <stdio.h>
#include <stdlib.h>

const int POCETNA_VELICINA = 10;
const int VELICINA_DODATNA_ALOKACIJA = 8;

typedef struct{
    int * elementi;
    int brojElemenata;
    int alociranaVelicina;
}DinamickiNiz;

DinamickiNiz kreiraj(){
    DinamickiNiz dn;
    dn.brojElemenata = 0;
    dn.elementi = (int *)calloc(POCETNA_VELICINA,sizeof(int));
    dn.alociranaVelicina = POCETNA_VELICINA;
    return dn;
}

DinamickiNiz obrisi(DinamickiNiz dn){
    free(dn.elementi);
    dn.alociranaVelicina = 0;
    dn.brojElemenata = 0;
    return dn;
}

void ispisiElemente(DinamickiNiz dn){
    if(dn.brojElemenata==0){
        printf("[]");
        return;
    }
    printf("[");
    for(int i=0;i<dn.brojElemenata;i++){
        (i<dn.brojElemenata-1 ? printf("%d, ",dn.elementi[i]) : printf("%d]\n",dn.elementi[i]));
    }
}

void ispisi(DinamickiNiz dn){
    printf("Broj elemenata: %d",dn.brojElemenata);
    printf("\nAlocirana velicina: %d",dn.alociranaVelicina);
    putchar('\n');
    ispisiElemente(dn);
}

DinamickiNiz dodajNaKraj(DinamickiNiz dn, int novi){
    // alocirana velicina je manja ili jednaka broju elemenata
    // potrebno je alocirati dodatnu memoriju
    if(dn.brojElemenata>=dn.alociranaVelicina){
        dn.alociranaVelicina = dn.alociranaVelicina + VELICINA_DODATNA_ALOKACIJA;
        dn.elementi = (int *) realloc(dn.elementi, dn.alociranaVelicina*sizeof(int));
    }
    dn.elementi[dn.brojElemenata] = novi;
    dn.brojElemenata++;
    return dn;
}

DinamickiNiz dodajNaIndeks(DinamickiNiz dn,int indeks, int novi){
    if(indeks<0 || indeks>dn.brojElemenata){
       return dn;
    }
    if(dn.brojElemenata>=dn.alociranaVelicina){
        dn.alociranaVelicina = dn.alociranaVelicina + VELICINA_DODATNA_ALOKACIJA;
        dn.elementi = (int *) realloc(dn.elementi, dn.alociranaVelicina*sizeof(int));
    }
    // pomeramo sve elemente iza indeksa za jedno mesto u desno
    for(int i=dn.brojElemenata;i>indeks;i--){
        dn.elementi[i] = dn.elementi[i-1];
    }
    dn.elementi[indeks] = novi;
    dn.brojElemenata++;
    return dn;
}

int vratiElement(DinamickiNiz dn, int indeks){
    if(indeks<0 || indeks>=dn.brojElemenata){
        return -1; // greska
    }
    return dn.elementi[indeks];
}

int sadrziElement(DinamickiNiz dn, int elem){
    for(int i=0;i<dn.brojElemenata;i++){
        if(dn.elementi[i]==elem)
            return 1;
    }
    return 0;
}

// vraca prvu poziciju na kojoj se nalazi element, ili -1 ako se element ne nalazi u nizu
int vratiIndeksElementa(DinamickiNiz dn, int elem){
    for(int i=0;i<dn.brojElemenata;i++){
        if(dn.elementi[i]==elem)
            return i;
    }
    return -1;
}

DinamickiNiz obrisiElementNaIndeksu(DinamickiNiz dn,int indeks){
    // proveriti da li indeks izlazi iz granica
    if(indeks<0 || indeks>=dn.brojElemenata){
         return dn;
    }
    // pomeramo sve elemente iza indeksa za jedno mesto u levo
    for(int i=indeks;i<dn.brojElemenata;i++){
        dn.elementi[i] = dn.elementi[i+1];
    }
    dn.brojElemenata--;
    if(dn.brojElemenata < dn.alociranaVelicina-VELICINA_DODATNA_ALOKACIJA){
        dn.alociranaVelicina-=VELICINA_DODATNA_ALOKACIJA;
        dn.elementi = (int *)realloc(dn.elementi, dn.alociranaVelicina*sizeof(int));
    }
    return dn;
}


DinamickiNiz obrisiElement(DinamickiNiz dn,int elem){
    int indeks = vratiIndeksElementa(dn, elem);
    if(indeks!=-1)
        dn = obrisiElementNaIndeksu(dn, indeks);
    return dn;
}


// dodatni zadaci:
// dodaj sve elemente iz nekog statickog niza
// spoj dva dinamicka niza
// obrisi poslednje pojavljivanje elementa
// obrisi sva pojavljivanja elementa
// dodaj u sortiran dinamički niz



int main(){
    DinamickiNiz mojNiz = kreiraj();
    for(int i=0;i<12;i++){
        mojNiz = dodajNaKraj(mojNiz,10+i);
    }
    ispisi(mojNiz);
    printf("\nElement na indeksu %d: %d",9,vratiElement(mojNiz,9));
    printf("\nelement na indeksu %d: %d",30,vratiElement(mojNiz,40));  // greska
    printf("\nDodavanje dva elementa na indeksu, jedan indeks izvan granice\n");
    mojNiz = dodajNaIndeks(mojNiz,6,22);
    mojNiz = dodajNaIndeks(mojNiz,10,50);
    ispisi(mojNiz);
    printf("\nBrisanje pet elemenata na indeksu\n");
    mojNiz = obrisiElementNaIndeksu(mojNiz,2);
    mojNiz = obrisiElementNaIndeksu(mojNiz,3);
    mojNiz = obrisiElementNaIndeksu(mojNiz,8);
    mojNiz = obrisiElementNaIndeksu(mojNiz,4);
    mojNiz = obrisiElementNaIndeksu(mojNiz,1);
    ispisi(mojNiz);
    int broj = 17;
    if(sadrziElement(mojNiz,broj)){
        printf("Niz sadrzi broj %d\n",broj);
    }else{
        printf("Niz ne sadrzi broj %d\n",broj);
    }
    broj = 100;
    if(sadrziElement(mojNiz,broj)){
        printf("Niz sadrzi broj %d\n",broj);
    }else{
        printf("Niz ne sadrzi broj %d\n",broj);
    }
    mojNiz = obrisiElement(mojNiz,broj);
    printf("Niz posle brisanja elementa %d\n",broj);
    ispisi(mojNiz);
    broj = 17;
    mojNiz = obrisiElement(mojNiz,broj);
    printf("Niz posle brisanja elementa %d\n",broj);
    ispisi(mojNiz);
    mojNiz = obrisi(mojNiz);
    printf("Niz posle brisanja\n");
    ispisi(mojNiz);
    return 0;
}

