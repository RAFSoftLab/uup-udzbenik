#include <stdio.h>
#include <stdlib.h>

void podstring(char *str, int start, int end, char * rez);

int main(){
    printf("Unesite string: \n");
    char unos[200];
    fgets(unos,200,stdin);
    char rez[50];
    podstring(unos,2,6, rez);
    printf("Podstring: %s\n", rez);
    return 0;
}
void podstring(char *str, int start, int end, char * rez){
    if(start<0 || start>end) return;
    int i = 0;
    while(start+i<end && str[start+i]!=0){
       rez[i] = str[start+i];
       i++;
    }
    rez[i] = 0;
}

