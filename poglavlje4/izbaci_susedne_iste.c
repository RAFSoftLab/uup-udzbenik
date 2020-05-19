#include <stdio.h>

int main()
{
    char karakter;
    char prethodniKarakter;
    prethodniKarakter = getchar();
    putchar(prethodniKarakter);
    while((karakter = getchar()) != '\n'){
        if(prethodniKarakter!=karakter){
            putchar(karakter);
            prethodniKarakter = karakter;
        }
    }
    return 0;
}

