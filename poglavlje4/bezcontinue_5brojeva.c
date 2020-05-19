# include <stdio.h>

int main()
{
    int i = 0;
    double broj, suma = 0.0;
    do{
        printf("Unesite broj %d: ",i);
        scanf("%lf",&broj);
        // sabiramo samo pozitivne brojeve
        if(broj >= 0.0){
            i++;
            suma += broj;
        }

    }while(i<5);
    printf("Suma = %.2lf",suma);
    return 0;
}

