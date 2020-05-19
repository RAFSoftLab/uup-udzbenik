#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    fgets(str1,100,stdin);
    char * p = strchr(str1,',');
    if(p){
        printf("String sadrzi zarez\n");
    }else{
        printf("String ne sadrzi zarez");
    }
    return 0;
}

