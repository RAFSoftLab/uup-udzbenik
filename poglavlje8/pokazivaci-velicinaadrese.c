#include <stdio.h>

int main(){
    int p1;
    char p2;
    printf("velicina promenljive p1 je %ld\n", sizeof(p1));
    printf("velicina promenljive p2 je %ld\n", sizeof(p2));
    printf("velicina adrese promenljive p1 je %ld\n", sizeof(&p1));
    printf("velicina adrese promenljive p2 je %ld", sizeof(&p2));
    return 0;
}
