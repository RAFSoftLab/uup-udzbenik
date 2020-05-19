#include <stdio.h>

int main(){
    int b = 3;
    do{
      int a = 10;
      printf("%d %d\n",a,b);
      a--;
      b++;
    }while(a>1);
    return 0;
}

