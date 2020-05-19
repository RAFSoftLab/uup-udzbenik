#include <stdio.h>

int main()
{
    char malo;
    printf("Unesite malo slovo: ");
    scanf("%c", &malo);
    char veliko = malo - 32;
    printf("Veliko slovo je %c\n", veliko);
    return 0;
}
