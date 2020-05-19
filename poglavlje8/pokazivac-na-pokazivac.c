#include <stdio.h>

int main () {
   int  var;
   int  *ptr;
   int  **pptr;  // pokazivac na pokazivac
   var = 3000;
   ptr = &var;
   pptr = &ptr;  // adresa promenljive koja je pokazivac
   printf("var = %d\n", var );
   printf("*ptr = %d\n", *ptr );
   printf("**pptr = %d\n", **pptr);
   return 0;
}
