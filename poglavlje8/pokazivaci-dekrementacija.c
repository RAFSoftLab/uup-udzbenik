#include <stdio.h>

int main(){
  int duzina = 3;
  int  var[] = {10, 100, 200};
  int  *ptr;
  ptr = &var[duzina-1];
  do{
    printf("Adresa: %p\n", ptr);
    printf("Vrednost: %d\n", *ptr);
    ptr--;
  }while(ptr>=var);
  return 0;
}

