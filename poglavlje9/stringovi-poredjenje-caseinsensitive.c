#include <stdio.h>
#include <string.h>

int charcmp_caseinsensitive(char ch1, char ch2){
    if(ch1>='A' && ch1<='Z')
        ch1 += 32;
    if(ch2>='A' && ch2<='Z')
        ch2 += 32;
    return ch1-ch2;
}

int strcmp_caseinsensitive(const char* str1, const char* str2){
    for(int i=0;str1[i]!=0 || str2[i]!=0;i++){
        int rez = charcmp_caseinsensitive(str1[i],str2[i]);
        if(rez!=0) return rez;
    }
    return 0;
}

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
             if (strcmp_caseinsensitive(strNiz[j], strNiz[j+1]) > 0) {
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

