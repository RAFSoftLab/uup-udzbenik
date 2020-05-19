#include <stdio.h>

int main()
{
    char c = getchar();
    printf("Uneti karakter: %c, redni broj u ascii tabeli %d\n",c,c);
    putchar(c);
    putchar('\n');
    putchar(99);
    return 0;
}
