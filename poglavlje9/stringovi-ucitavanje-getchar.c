#include <stdio.h>

int main(){
    char str[20];
    char ch;
    int i=0;
    printf("Unesite string: ");
    while(ch!='\n'){
        ch=getchar();
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    printf("Uneti string: %s", str);
    return 0;
}
