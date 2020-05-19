#include<stdio.h>

int main(){
 {                      // spoljasnju blok
  int x=10;
  {                     // unutrasnju blok 
    printf("x=%d",x);
  }
  printf("\nx=%d",x);
 }
 return 0;
}

