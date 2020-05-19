#include <stdio.h>

double rek(int n, int i){
    if(i==n)
        return i;
    else{
        return i+(i%2==0 ? -1: 1)*(2*n-i+1)/rek(n,i+1);
    }
}

double iter(int n){
    double rez = n;
    int i = n-1;
    while(i>0){
        rez = i + (i%2==0 ? -1: 1) *(2*n-(i-1))/rez;
        i--;
    }
    return rez;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("rek(%d) = %lf\n", n, rek(n,1));
    printf("iter(%d) = %lf", n, iter(n));
    return 0;
}


