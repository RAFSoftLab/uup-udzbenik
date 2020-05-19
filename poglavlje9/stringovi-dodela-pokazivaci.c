#include <stdio.h>
#include <stdlib.h>

int main(){
    char * str1, * str2;
    str1 = (char *) malloc(20);
    fgets(str1,20,stdin);
    str2 = str1;
    *(str2+2)='?';
    puts(str1);
    puts(str2);
    return 0;
}
