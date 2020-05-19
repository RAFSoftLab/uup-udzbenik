#include <stdio.h>

int main(){
    char str[] = "program";
    char *p = str;
    p+=2;
    *p = '!';
    printf("%s %s %c", str, p, *p);
    return 0;
}

