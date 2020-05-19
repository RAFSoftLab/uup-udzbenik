#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,n, veliko;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            veliko = i+j==((n-1)/2) || abs(j-i)==(n/2)  || j+i==n/2+n-1;
            if(j<n-i)
                putchar('a'+j-(veliko ? 32 : 0)) ;
            else
                putchar('a'+n-i-1-(veliko ? 32 : 0));
        }
        putchar('\n');
    }
    return 0;
}

