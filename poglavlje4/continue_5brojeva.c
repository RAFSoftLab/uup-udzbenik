# include <stdio.h>

int main()
{
    int i = 0;
    double broj, suma = 0.0;
    do{
        printf("Unesite broj %d: ",i);
        scanf("%lf",&broj);
        // ako korisnik unese negativan broj, preskacemo ostatak iteracije
        if(broj < 0.0){
            continue;
        }
        i++;
        suma += broj;
    }while(i<5);
    printf("Suma = %.2lf",suma);
    return 0;
}

