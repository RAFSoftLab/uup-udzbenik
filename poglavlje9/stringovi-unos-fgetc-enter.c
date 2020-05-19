#include <stdio.h>

int main(){
    char str[20];
    fgets(str,sizeof(str),stdin);
    printf("Uneti string (ASCII): ");
    int i = 0;
    while(str[i]!=0){
        printf("%d  ",str[i++]);
    }
    return 0;
}
