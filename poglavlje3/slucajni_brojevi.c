#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int broj = rand();
    printf("%d ", broj);
}
