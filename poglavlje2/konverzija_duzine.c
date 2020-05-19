#include <stdio.h>

int main()
{
    double duzinaStope, duzinaMetar;
    printf("Unesite duzinu u stopama: ");
    scanf("%lf", &duzinaStope);
    duzinaMetar = duzinaStope * 0.3048;
    printf("Duzina u metrima je %lf\n", duzinaMetar);
    return 0;
}
