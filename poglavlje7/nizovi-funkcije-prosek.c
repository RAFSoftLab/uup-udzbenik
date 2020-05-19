#include <stdio.h>

float prosek(float niz[], int velicina){
    float suma = 0.0;
    for(int i=0;i<velicina;i++){
        suma+=niz[i];
    }
    return suma/velicina;

}

int main(){
    float nizVrednosti[] = {1.0, 9.0, 8.0, 5.0, 12.0};
    float p = prosek(nizVrednosti,5);
    printf("prosek = %.2f",p);
    return 0;
}

