#include <stdio.h>

int main () {
   int  var = 20;
   int  *ip;
   ip = &var;
   printf("Adresa promenljive var: %p\n", &var  );
   printf("Adresa skladistena u pokazivacu ip: %p\n", ip );
   printf("Vrednost promenljive na koju pokazuje *ip: %d\n", *ip );
   printf("Vrednost promenljive var je %d\n", var );
   *ip = 30;
   printf("Nova vrednost promenljive var je %d\n", var );
   return 0;
}

