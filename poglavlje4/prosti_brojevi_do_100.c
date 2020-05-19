#include <stdio.h>

int main(){
    for(int i=2; i<100; i++){
        int j = 2;
        int pronadjenDelilac = 0;
        while(j<=i/2 && !pronadjenDelilac){
            pronadjenDelilac = i%j==0;
            j++;
        }
        if(!pronadjenDelilac)
            printf("Broj %i je prost broj\n", i);
    }
    return 0;
}
