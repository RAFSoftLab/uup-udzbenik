#include <stdio.h>

int main(){
    int n;
    printf("Unesite velicinu niza: ");
    scanf("%d",&n);
    int niz[n];
    for(int i=0;i<n;i++){
        scanf("%d",&niz[i]);
    }
    printf("\n[");
    for(int i=0;i<n;i++){
        printf("%d",niz[i]);
        (i<(n-1) ? printf(", ") : printf("]"));
    }
    return 0;
}

