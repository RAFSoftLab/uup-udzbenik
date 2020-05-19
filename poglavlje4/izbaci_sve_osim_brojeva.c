#include <stdio.h>

int main()
{
    char ch = getchar();
    while(ch != '\n'){
        if(ch>='0' && ch<='9')
            putchar(ch);
        ch = getchar();
    }
    return 0;
}
