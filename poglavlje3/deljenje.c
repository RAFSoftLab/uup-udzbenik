#include <stdio.h>

int main()
{
    int brojInt1 = 7, brojInt2 = 3;
    float brojFloat1 = 7, brojFloat2 = 3;
    printf("Rezultat celobrojnog deljenja %d/%d jednak je %d\n", brojInt1, brojInt2, brojInt1/brojInt2);
    printf("Rezultat deljenja %0.2f/%0.2f jednak je %0.2f", 
            brojFloat1, brojFloat2, brojFloat1/brojFloat2);
    return 0;
}
