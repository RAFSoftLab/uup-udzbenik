#include <stdio.h>

typedef struct{
    int brojPoena;
    int ocena;
}Poeni;

void dodajPoene(Poeni * pok, int dodatniPoeni){
    pok->brojPoena= pok->brojPoena + dodatniPoeni;
    if(pok->brojPoena>90)
        pok->ocena=10;
    else if(pok->brojPoena>80)
        pok->ocena=9;
    else if(pok->brojPoena>70)
        pok->ocena=8;
    else if(pok->brojPoena>60)
        pok->ocena=7;
    else if(pok->brojPoena>50)
        pok->ocena=6;
    else
        pok->ocena=5;
}

int main(){
    Poeni p;
    p.brojPoena = 82;
    p.ocena = 9;
    Poeni * ppok = &p;
    dodajPoene(ppok,9);
    printf("Poeni: %d, ocena: %d",ppok->brojPoena, ppok->ocena);
    return 0;
}

