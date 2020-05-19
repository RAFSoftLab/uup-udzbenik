#include <stdio.h>

void ispisi(int mat[][5], int brVrsta, int brKolona){
    for(int i=0;i<brVrsta;i++){
        for(int j=0;j<brKolona;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    ispisi(mat,n,m);
    return 0;
}
