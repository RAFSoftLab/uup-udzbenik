#include <stdio.h>

int main(){
    char str[40];
    printf("Unesite string: ");
    scanf("%s",str);
    printf("Uneti string: ");
    int i=0;
    while(str[i]!=0){
        putchar(str[i]);
        i++;
    }
    return 0;
}

