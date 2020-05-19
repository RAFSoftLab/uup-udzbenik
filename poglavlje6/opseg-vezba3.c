 #include <stdio.h>

int a = 0;

int main(){
    int b = 3;
    do{
      int a = 5;
      printf("%d %d\n",a,b);
      a--;
      b++;
    }while(a);
    return 0;
}

