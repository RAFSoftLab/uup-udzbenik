#include <stdio.h>

int brojCifara(int broj){
    int brojCifara = 0;
    while(broj>0){
        brojCifara++;
        broj/=10;
    }
    return brojCifara;
}

int main(){
    int n;
    scanf("%d",&n);
    int dimenzija = brojCifara(n);
    int mat[dimenzija][dimenzija];
    // popunjavanje prve vrste
    for(int i=dimenzija-1;i>=0;i--){
        mat[0][i] = n%10;
        n/=10;
    }
    // popunjavanje ostalih vrsta
    for(int i=1;i<dimenzija;i++){
        for(int j=0;j<dimenzija;j++){
            if(i%2==1){  // umenjuje se za 1
                mat[i][j] = mat[i-1][j]-1;
            }else{       // umanjuje se za 2
               mat[i][j] = mat[i-1][j]-2;
            }
            if(mat[i][j]<0) // ako smo dosli do 0 krecemo od 9
               mat[i][j]+=10;
        }
    }
    // ispis matrice
    for(int i=0;i<dimenzija;i++){
        for(int j=0;j<dimenzija;j++){
            printf("%2d",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

