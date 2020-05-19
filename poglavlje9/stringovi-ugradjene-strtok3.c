#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strlen(str)-1]=0;
    char * token = strtok(str," ");
    while(token!=NULL){
        int i = 0,j,duzina = strlen(token);
        while(i<strlen(token)-1){
            j = i+1;
            while(j<strlen(token)){
                if(token[i]==token[j]){
                    if(j-i-1<duzina){
                        duzina = j-i-1;
                        break;
                    }
                }
                j++;
            }
            i++;
        }
        if(duzina<strlen(token))
            printf("%s - %d\n",token, duzina);
        token = strtok(NULL," ");
    }
    return 0;
}

