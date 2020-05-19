#include <stdio.h>

int mat[100][100];

int proveriPravougaonik(int indexi, int indexj, int visina, int sirina, int element){       
        for(int i=0;i<visina;i++){
            for(int j=0;j<sirina;j++){
                if(mat[indexi+i][indexj+j]!=element) return 0;
            }
        }
        return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
       }
    }
    int dimenzijaNajveca = 1;   
    int rezIndexVrsta = 0, rezIndexKolona = 0, rezSirina = 0, rezVisina = 0;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
            int element = mat[i][j];
            int k = 1;
            while(j+k<n && mat[i][j+k]==element){
                k++;
            }         
            int m = 1;
            while(i+m<n && mat[i+m][j]==element){
                m++;
            }			
			if(k*m<=dimenzijaNajveca) continue;
            int pronadjenNajveci = 0;
            int starom = m;
            do{
                m = starom;
                if(k*m<=dimenzijaNajveca) break;
                do{
                    if(proveriPravougaonik(i,j,m,k,element) && k*m>dimenzijaNajveca){
                        dimenzijaNajveca = k*m;
                        rezIndexVrsta = i;
                        rezIndexKolona = j;
                        rezSirina = k;
                        rezVisina = m;
                        pronadjenNajveci = 1;
                        break;
                    }
                    m--;
                }while(m>=1 && !pronadjenNajveci);
                k--;
            } while(k>=1 && !pronadjenNajveci);
       }
    }
    printf("dimenzija: %dX%d, indeksi %d %d\n\n", rezVisina, rezSirina, rezIndexVrsta, rezIndexKolona);

    return 0;
}
