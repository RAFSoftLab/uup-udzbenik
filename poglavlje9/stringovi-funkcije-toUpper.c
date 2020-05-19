#include <stdio.h>

void toUpper(char str[]); // sva slova u stringu pretvara u velika

int main(){
    printf("Unesite string: \n");
    char unos[200];
    fgets(unos,200,stdin);
    toUpper(unos);
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
