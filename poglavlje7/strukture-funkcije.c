#include <stdio.h>

typedef struct{
    int godina;
    int mesec;
    int dan;
}datum;

datum kreirajDatum(int godina, int mesec, int dan){
    datum d;
    d.godina = godina;
    d.mesec = mesec;
    d.dan = dan;
    return d;
}

void ispisiDatum(datum d){
    printf("Datum: %d.%d.%d.\n", d.dan, d.mesec, d.godina);
}

int main(){
    datum d1 = kreirajDatum(2020,2,15);
    datum d2 = kreirajDatum(2020,2,16);
    ispisiDatum(d1);
    ispisiDatum(d2);
    return 0;
}
