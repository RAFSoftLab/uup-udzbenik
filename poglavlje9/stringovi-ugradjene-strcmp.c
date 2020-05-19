#include <stdio.h>
#include <string.h>

int main(){
    int duzina, i, j;
    char strNiz[20][50];
    printf("Unesite duzinu niza (manje od 20): \n");
    scanf("%d", &duzina);
    printf("Unesite %d stringova: \n", duzina);
    for(i=0; i<duzina; i++){
        scanf("%s", strNiz[i]);
    }
    char t[50];
    for(i=0; i<duzina-1; i++){
        for (j=0; j<duzina-i-1; j++){
             if (strcmp(strNiz[j], strNiz[j+1]) > 0) {
                strcpy(t, strNiz[j]);
                strcpy(strNiz[j], strNiz[j+1]);
                strcpy(strNiz[j+1], t);
             }
          }
    }
    printf("\nSortiran niz stringova:\n");
    for(i=0;i<duzina;i++)
       printf("%s\n", strNiz[i]);
    return 0;
}

