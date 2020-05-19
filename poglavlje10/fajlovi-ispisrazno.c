#include <stdio.h>

int main(){
    FILE * fp = fopen("izlaz.txt","w");
    if(fp!=NULL){
        fputs("prva linija",fp);
        int br1 = 3;
        float br2 = 98.5;
        fprintf(fp,", nastavak prve linije: %d %.1f\n",br1, br2);
        fputc('a',fp);
        char ch = '\n';
        fputc(ch,fp);
        char str[] = "treca linija";
        fputs(str,fp);
        fclose(fp);
    }else
      printf("Greska prilikom otvaranja fajla");
    return 0;
}

