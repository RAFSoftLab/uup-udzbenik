#include <stdio.h>
#include <string.h>

int main(){
   char str1[] = "Zdravo";
   char str2[] = " svima";
   char str3[15];
   int  duzina;

    /* kopira str1 u str3 */
   strcpy(str3, str1);
   printf("strcpy(str3, str1), str3 = %s\n", str3 );

   /* konkatenacija stringova str1 i str2 */
   strcat(str3, str2);
   printf("strcat(str3, str2), str3 = %s\n", str3 );

   /* duzina stringa str1 posle konkatenacije */
   duzina = strlen(str3);
   printf("strlen(str3) = %d\n", duzina );
   return 0;
}

