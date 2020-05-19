#include <stdio.h>

int main(){
    char str1[200], str2[100];
    printf("Unesite prvi string: ");
    scanf("%s",str1);
    printf("Unesite drugi string: ");
    scanf("%s",str2);
    int i = 0;
    while(str1[i]!=0){
        i++;
    }
    int j = 0;
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("Rezultat konkatenacije: %s", str1);
    return 0;
}

