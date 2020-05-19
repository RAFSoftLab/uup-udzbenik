#include <stdio.h>
#include <stdlib.h>

char* podstring(char *str, int start, int end);

int main(){
    printf("Unesite string: \n");
    char unos[200];
    fgets(unos,200,stdin);
    char * rez;
    rez = podstring(unos,2,6);
    printf("Podstring: %s\n", rez);
    free(rez);
    return 0;
}
char * podstring(char *str, int start, int end){
    if(start<0 || start>end) return NULL;
    int i = 0;
    char * rez = (char *)malloc(end-start+1);
    while(start+i<end && str[start+i]!=0){
       *(rez+i) = str[start+i];
       i++;
    }
    rez[i] = 0;
    return rez;
}

