#include <stdio.h>

int main(){
    int n;
    printf("Unesite velicinu niza: ");
    scanf("%d",&n);
    int niz[n];
    for(int i=0;i<n;i++){
        scanf("%d",&niz[i]);
    }
    int min = niz[0];
    int indeks = 0;
    for(int i=1;i<n;i++){
       if(niz[i]<min){
         min = niz[i];
         indeks = i;
       }
    }
    printf("Minimalni element niza je %d i nalazi se na indeksu %d",min,indeks);
    return 0;
}

