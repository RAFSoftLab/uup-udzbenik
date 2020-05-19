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
            // dodavanje elementa sortirano rastuce
            int k =0;
            while(k<brojElemenataRez && nizRez[k]<niz[i])
                k++;
            if(k == brojElemenataRez)
                // element koji dodajemo je najveci i ide na kraj
                nizRez[brojElemenataRez] = niz[i];
            else{
                // novi element treba da ubacimo na indeks k,
                // a pre toga da sve elemente od k do kraja niza pomeramo za jedno mesto
                for(int m = brojElemenataRez;m>=k;m--){
                    nizRez[m] = nizRez[m-1];
                }
                nizRez[k] = niz[i];
            }
            brojElemenataRez++;
        }
    }
    printf("\nNiz - razliciti elementi:\n");
    for(int i=0;i<brojElemenataRez;i++){
        printf("%d ",nizRez[i]);
    }
    return 0;
}
