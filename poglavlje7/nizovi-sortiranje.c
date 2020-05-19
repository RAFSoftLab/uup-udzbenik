#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int niz[], int duzina);
void selection_sort(int niz[], int duzina);
void insertion_sort(int niz[], int duzina);

int main()
{
    int niz[100], duzina, i;
    printf("Unesite duzinu niza: ");
    scanf("%d", &duzina);
    printf("\nUnesite elemente niza: ");
    for(i=0; i<duzina; i++){
        scanf("%d", &niz[i]);
    }
    // ispis niza
    printf("\nUnet niz: [");
    for (i = 0; i<duzina; i++) {
        printf("%d",niz[i]);
        (i<(duzina-1) ? printf(",") : printf("]"));
    }
    selection_sort(niz, duzina);
    printf("\nSortiran niz (u rastucem poretku):\n[");
    for(i=0;i<duzina;i++){
        printf("%d",niz[i]);
        (i<(duzina-1) ? printf(",") : printf("]"));
    }
    return 0;
}

void bubble_sort(int niz[], int duzina){
    int i, j, pom;
    for (i = 0; i < duzina; ++i){
        for (j = 0; j < duzina-1-i; ++j){
            if (niz[j] > niz[j+1]){
                pom =  niz[j];
                niz[j] = niz[j+1];
                niz[j+1] = pom;
            }
        }
    }
}

void selection_sort(int niz[], int duzina){
    int i, j, iMin, pom;
    for(i=0; i<duzina;i++){
        iMin = i;
        for(j=i+1; j<duzina; j++){
            if(niz[j]<niz[iMin]){
                iMin = j;
            }
        }
        if(iMin!=i){
            pom = niz[i];
            niz[i] = niz[iMin];
            niz[iMin] =pom;
        }
    }
}

void insertion_sort(int niz[], int duzina){
   int tek, i , j;
   for (i=1; i<duzina; i++){
      tek = niz[i];
      j = i;
      while (j > 0 && niz[j-1] > tek){
           niz[j] = niz[j-1];
           j--;
      }
      niz[j] = tek;
 }
}


