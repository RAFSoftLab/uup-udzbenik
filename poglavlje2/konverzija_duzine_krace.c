#include <stdio.h>

int main()
{
    double duzinaStope;
    printf("Unesite duzinu u stopama: ");
    scanf("%lf", &duzinaStope);
    printf("Duzina %lf u stopama je jednaka duzini %lf u metrima \n", duzinaStope, duzinaStope * 0.3048);
    return 0;
}
