#include <stdio.h>

void toUpper(char str[]); // sva slova u stringu pretvara u velika
void toUpperPok(char *str);

int main(){
    printf("Unesite string: \n");
    char unos[200];
    fgets(unos,200,stdin);
    toUpperPok(unos);
    printf("Uneti string posle poziva funkcije toUpper: %s\n", unos);
    return 0;
}

void toUpper(char str[]){
    int i = 0;
    while(str[i]!='\0'){
       if('a'<=str[i] && str[i]<='z'){
            str[i] = str[i]-32;
       }
       i++;
    }
}

void toUpperPok(char *str){
    while(*str!='\0'){
       if('a'<=*str && *str<='z'){
            *str = *str-32;
       }
       str++;
    }
}

