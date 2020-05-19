#include <stdio.h>
#include <string.h>

int main(){
    char str[200];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]=0;
    char *token;
    token = strtok(str,", ");
    while(token!=NULL){
        printf("%s \n",token);
        token = strtok(NULL,", ");
    }
    return 0;
}

