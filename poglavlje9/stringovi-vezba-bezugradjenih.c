#include <stdio.h>
#include <string.h>

int main(){
    char str[200], rez[200];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]=0;
    int i = 0, iPocetakReci, iKrajReci, brojacRez = 0;
    while(str[i]!=0){
        iPocetakReci = i;
        while(str[i]!=' ' && str[i]!=0){
            i++;
        }
        iKrajReci = i-1;
        if(str[iPocetakReci]==str[iKrajReci]){
            // prepisujemo rec u rezultujuci string karakter po karakter
            for(int k = iPocetakReci;k<=iKrajReci;k++){
                rez[brojacRez++] = str[k];
            }
            rez[brojacRez++] = ' ';
        }
        if(str[i]==0) break;
        i++;
    }
    rez[brojacRez] = 0;
    puts(rez);
    return 0;
}
