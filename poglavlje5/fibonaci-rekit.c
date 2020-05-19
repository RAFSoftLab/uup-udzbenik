#include <stdio.h>

int fibonaci(int n);
int fibonaciit(int n);

int main()
{
    int n;
    scanf("%d",&n);
    printf("fib(%d) = %d\n", n, fibonaci(n));
    printf("fibit(%d) = %d", n, fibonaciit(n));
    return 0;
}

int fibonaci(int n){
    if(n==0 || n==1) return 1;
    return fibonaci(n-1)+fibonaci(n-2);
}

int fibonaciit(int n){
   if(n==0 || n==1)
    return 1;
   else{
    int prethodni = 1;
    int rez = 1;
    int i = 2;
    while(i<=n){
        int temp = prethodni + rez;
        prethodni = rez;
        rez = temp;
        i++;
    }
    return rez;
    }
}





