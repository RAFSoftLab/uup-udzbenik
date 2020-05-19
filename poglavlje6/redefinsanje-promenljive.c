#include<stdio.h>

int main()
{
    int x=40;
    if(x>20){
      int x=20;            // redefinisanje promenljive
      printf("x=%d",x);    // pristup promenljivoj iz unutrasnjeg bloka
    }
    printf("\nx=%d",x);    // pristup promenljivoj iz spoljasnjeg bloka
return 0;
}

