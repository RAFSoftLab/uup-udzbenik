#include <stdio.h>

int main(){
    printf("Unesite dimenzije matrice, broj vrsta i kolona: ");
    int n,m;
    scanf("%d%d",&n,&m);
    int mat[n][m];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           printf("\nmat[%d][%d] = ",i,j);
           scanf("%d",&mat[i][j]);
        }
    }

    printf("\nIspis elemenata matrice\n\n");

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           printf("%2d  ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
