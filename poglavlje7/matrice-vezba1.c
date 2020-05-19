#include <stdio.h>

int main(){
    printf("Unesite dimenziju kvadratne matrice:");
    int n;
    scanf("%d",&n);
    int mat[n][n];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           scanf("%d",&mat[i][j]);
        }
    }
    printf("\nElementi glavne dijagonale\n");

    for(i=0;i<n;i++){
       printf("%d ",mat[i][i]);
    }
    printf("\nElementi sporedne dijagonale\n");

    for(i=0;i<n;i++){
       printf("%d ",mat[i][n-i-1]);
    }
    return 0;
}

