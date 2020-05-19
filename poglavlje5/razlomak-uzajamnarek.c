#include <stdio.h>

double rekminus(int n,int i);
double rekplus(int n,int i);

int main(){
    int n;
    scanf("%d",&n);
    printf("rek(%d) = %lf\n", n, rekplus(n,1));
    return 0;
}

double rekminus(int n,int i){
    if(i==n)
        return 1.0*i;
    else{
        return i-(2*n-i+1)/rekplus(n,i+1);
    }
}

double rekplus(int n,int i){
    if(i==n)
        return 1.0*i;
    else
        return i+(2*n-i+1)/rekminus(n,i+1);
}



