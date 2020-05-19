#include <stdio.h>

typedef struct{
    int * brojPoenaPok;
    int * ocenaPok;
}Poeni;

void dodajPoene(Poeni p, int dodatniPoeni){
    *p.brojPoenaPok = *p.brojPoenaPok + dodatniPoeni;
    if(*p.brojPoenaPok>90)
        *p.ocenaPok=10;
    else if(*p.brojPoenaPok>80)
        *p.ocenaPok=9;
    else if(*p.brojPoenaPok>70)
        *p.ocenaPok=8;
    else if(*p.brojPoenaPok>60)
        *p.ocenaPok=7;
    else if(*p.brojPoenaPok>50)
        *p.ocenaPok=6;
    else
        *p.ocenaPok=5;
}

int main(){
    int brojPoena = 82;
    int ocena = 9;
    Poeni p;
    p.brojPoenaPok = &brojPoena;
    p.ocenaPok = &ocena;
    dodajPoene(p,9);
    printf("Poeni: %d, ocena: %d",*p.brojPoenaPok, *p.ocenaPok);
    return 0;
}

