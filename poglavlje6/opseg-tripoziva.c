#include<stdio.h>

void prikazi();

int main(){
    prikazi();
    prikazi();
    prikazi();
    return 0;
}
void prikazi(){
    int x=10;
    x=x+10;
    printf("%d\n",x);
}

