#include <stdio.h>

int main(){
    printf("Unesite velicinu niza: ");
    int velicina;
    scanf("%d",&velicina);
    int niz[velicina];
    printf("Unesite elemente: ");
    for(int i=0;i<velicina;i++){
        scanf("%d",&niz[i]);
    }
    int nizRez[velicina];
    int brojElemenataRez = 0;
    for(int i=0;i<velicina;i++){
        // proveravamo da li se element nalazi u rezultujucem nizu
        int j;
        for(j=0;j<brojElemenataRez;j++){
            if(nizRez[j]==niz[i]) // element se vec nalazi u nizu
                break;
        }
        if(j==brojElemenataRez){
        // dosli smo do kraja i nismo nasli element, dodajemo ga u niz
            nizRez[brojElemenataRez] = niz[i];
            brojElemenataRez++;
        }
    }
    printf("\nNiz - razliciti elementi:\n");
    for(int i=0;i<brojElemenataRez;i++){
        printf("%d ",nizRez[i]);
    }
    return 0;
}

