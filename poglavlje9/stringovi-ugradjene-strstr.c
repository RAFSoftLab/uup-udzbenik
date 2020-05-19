#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[100], str2[20];
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
    str1[strlen(str1)-1] = 0;
    str2[strlen(str2)-1] = 0;
    char * p = (char *) malloc(100);
    int brojPojavljivanja = 0;
    strcpy(p,str1);
    while((p = strstr(p,str2))!=NULL){
        p++;
        brojPojavljivanja++;
    }
    printf("Broj pojavljivanja stringa %s u stringu %s: %d",str2,str1,brojPojavljivanja);
    return 0;
}

