#include <stdio.h>

int main(){
    FILE * fp = fopen("../temp/proba.txt","r");
    char ch;
    if(fp!=NULL){
        do{
            ch = fgetc(fp);
            printf("%c %d\n",ch,ch);
        }while(ch!=EOF);
        fclose(fp);        
    }else
     printf("Greska prilikom otvaranja fajla");
    return 0;
}

