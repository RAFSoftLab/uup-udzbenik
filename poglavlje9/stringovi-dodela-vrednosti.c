#include <stdio.h>

int main(){
    char str1[100];
    char str2[100];
    fgets(str1,sizeof(str1),stdin);
    int i = 0;
    while(str1[i]!='\0'){
       str2[i] = str1[i];
       i++;
    }
    str2[i] = '\0';
    printf("Prvi string: %s\n", str1);
    printf("Drugi string: %s", str2);
    return 0;
}


