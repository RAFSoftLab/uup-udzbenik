#include <stdio.h>

struct datum{
    int godina;
    int mesec;
    int dan;
};

int main(){
    struct datum d1 = {2020,2,15};
    struct datum d2;
    d2.godina = 2020;
    d2.mesec = 2;
    d2.dan = 16;
    printf("Datum: %d.%d.%d.\n", d1.dan, d1.mesec, d1.godina);
    printf("Datum: %d.%d.%d.", d2.dan, d2.mesec, d2.godina);
    return 0;
}

