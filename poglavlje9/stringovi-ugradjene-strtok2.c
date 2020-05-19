#include <stdio.h>
#include <string.h>

int main(){
    char str[200], rez[200] = "";
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]=0;
    char *token;
    token = strtok(str," ");
    while(token!=NULL){
        if(token[0]==token[strlen(token)-1]){
            strcat(rez,token);
            strcat(rez," ");
        }
        token = strtok(NULL," ");
    }
    puts(rez);
    return 0;
}

