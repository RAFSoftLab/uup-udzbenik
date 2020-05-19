#include <stdio.h>
#include <string.h>

int main(){
   char str[] = "abaabcdeagfeg";
   char * podstr = strstr(str,"de");
   char * token;
   if(strcmp(str,podstr)>0){
        token = strtok(str,"c");
        puts(token);
   }else{
        token = strtok(podstr,"f");
        puts(token);
   }
   return 0;
}
