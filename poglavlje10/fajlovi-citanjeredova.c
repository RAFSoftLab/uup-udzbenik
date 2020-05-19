#include <stdio.h>

int main(){
    FILE * fp = fopen("../temp/proba.txt","r");
    char red[100];
    int brojRedova = 0;
    if(fp!=NULL){
        do{
            fgets(red,100,fp);
            printf("%s",red);
            brojRedova++;
        }while(!feof(fp));
        printf("\nBroj redova: %d",brojRedova);
        fclose(fp);
    }else
     printf("Greska prilikom otvaranja fajla");
    return 0;
}

