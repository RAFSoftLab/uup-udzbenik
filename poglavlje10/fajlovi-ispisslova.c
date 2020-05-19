#include <stdio.h>

int main(){
    FILE * fp = fopen("../izlaz.txt","a");
    if(fp!=NULL){
        for(char ch='a';ch<='z';ch++){
            fprintf(fp,"\n%c %c %d %d",ch, ch-32, ch, ch-32);
        }
        fclose(fp);
    }else
        printf("Greska prilikom otvaranja fajla");
    return 0;
}

