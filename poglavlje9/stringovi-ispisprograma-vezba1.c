#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "praznik";
    char * podstr = str+strlen(str)-2;
    str[2] = 'i';
    *podstr = 'a';
    printf("%s %s\n", str,podstr);
    printf("%c %c %d\n", *str, *podstr, *podstr);
    return 0;
}

