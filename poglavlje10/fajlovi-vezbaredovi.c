#include <stdio.h>
#include <string.h>

int main(){
    FILE * fp = fopen("/home/bojanads/temp/proba.txt","r");
    char red[100];
    int brojRedova = 0;
    if(fp!=NULL){
        do{
            fgets(red,100,fp);
            if(red[0]==red[strlen(red)-2])
                brojRedova++;
        }while(!feof(fp));
        printf("\nBroj redova koji pocinju i zavrsavaju se istim karakterom: %d",brojRedova);
        fclose(fp);
    }else
     printf("Greska prilikom otvaranja fajla");
    return 0;
}

