#include<stdio.h>

int x=10;         // definicija globalne promenljive 

void povecaj();
int main(){
    printf("x=%d",x); // stampanje globalne promenljive   
    povecaj();
    printf("\nx=%d",x); // stampanje globalne promenljive  
    return 0;
}

void povecaj(){
    x=x+50;        // promena vrednosti globalne promenljive 
}

