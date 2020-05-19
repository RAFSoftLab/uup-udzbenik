#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    if(argc!=4){
        printf("Pogresan broj argumenata.");
        return 0;
    }
    FILE * ulazni = fopen(argv[1],"r");
    if(ulazni==NULL){
        printf("Nije moguce otvoriti fajl na putanji %s.", argv[1]);
        return 0;
    }    
    FILE * izlazni = fopen(argv[2],"w");
    int n = atoi(argv[3]);
    int i = 1, brojRedova = 0, brojKaraktera = 0;
    char ch;
    while(!feof(ulazni)){
        if(i%n!=0){
            while((ch = fgetc(ulazni)!='\n') && !feof(ulazni));
        }else{
            brojRedova++;
            while((ch = fgetc(ulazni)!='\n') && !feof(ulazni)){
                fputc(ch,izlazni);
                brojKaraktera++;
            }
            fputc(ch,izlazni);
            brojKaraktera++;
        }
        i++;
    }
    printf("Broj prepisanih redova: %d, karaktera: %d\n", brojRedova, brojKaraktera);
    fclose(ulazni);
    fclose(izlazni);
    return 0;
}
