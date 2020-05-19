#include <stdio.h>

int main(){
    FILE * fp = fopen("brojevi.txt","r");
    int br1,br2,br3, red=0;
    if(fp!=NULL){
        while(fscanf(fp,"%d%d%d", &br1, &br2, &br3)==3){
            if(br1+br2+br3>50){
                printf("red: %d, zbir: %d\n",red, br1+br2+br3);
            }
            red++;
        }
        fclose(fp);
    }else
      printf("Greska prilikom otvaranja fajla");
    return 0;
}

