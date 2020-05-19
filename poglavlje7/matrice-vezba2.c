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

    printf("\nIspis elemenata u vidu zmije po kolonama\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i%2==0)
               printf("%d ",mat[j][i]);
            else
               printf("%d ",mat[n-1-j][i]);
        }
    }

    printf("\n");

    // drugi nacin
    for(i=0;i<n;i++){
        if(i%2==0){
            for(j=0;j<n;j++)
                printf("%d ",mat[j][i]);
        }else{
            for(j=n-1;j>=0;j--)
                printf("%d ",mat[j][i]);
        }
    }
    return 0;
}


