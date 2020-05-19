#include <stdio.h>

typedef struct{
    char prvoSlovoImena;
    char prezime[50];
    char indeks[7];
    char godina[3];
    char smer[3];
}Nalog;

Nalog parseNalog(char * strNalog);

int main(){
    char str[200];
    printf("Unesite nalog:");
    fgets(str,200,stdin);
    Nalog n = parseNalog(str);
    printf("Prvo slovo imena: %c\n",n.prvoSlovoImena);
    printf("Prezime: %s\n",n.prezime);
    printf("Indeks: %s/%s-%s\n",n.indeks, n.smer, n.godina);
    return 0;
}

Nalog parseNalog(char * strNalog){
    Nalog n;
    n.prvoSlovoImena = *strNalog;
    strNalog++;
    int i = 0;
    while(*strNalog>='a' && *strNalog<='z'){
        n.prezime[i] = *strNalog;
        strNalog++;
        i++;
    }
    n.prezime[i] = 0;
    i = 0;
    while(*strNalog>='0' && *strNalog<='9'){
        n.indeks[i] = *strNalog;
        strNalog++;
        i++;
    }
    n.godina[0] = n.indeks[i-2];
    n.godina[1] = n.indeks[i-1];
    n.godina[2] = 0;
    n.indeks[i-2] = 0;
    i=0;
    while(*strNalog>='a' && *strNalog<='z'){
        n.smer[i] = *strNalog;
        strNalog++;
        i++;
    }
    n.smer[i]=0;
    return n;
}
