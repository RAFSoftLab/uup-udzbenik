#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "ddd";
    char str2[] = "bb";
    while(strcmp(str1,str2)>0){
        if(strlen(str1)>2 && strlen(str1)<4){
          strcat(str1,"b");
          str2[strlen(str2)-1] = 0;
        }else
           strcpy(str1,"a");
        puts(str1);
        puts(str2);
    }
    return 0;
}
