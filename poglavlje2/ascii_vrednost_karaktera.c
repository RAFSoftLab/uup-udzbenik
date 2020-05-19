#include <stdio.h>
int main()
{
    char c;
    printf("Unesite karakter:\n");
    scanf("%c",&c);  
    printf("decimalna vrednost karaktera u ascii tabeli je %d\n", c);
    printf("heksadecimalna vrednost karaktera u ascii tabeli je %x\n", c);
    return 0;
}
