#include <stdio.h>

int main(int argc, char * argv[]){
    printf("Broj argumenata komandne linije: %d\n", argc);
    printf("Argumenti:\n");
    for(int i=0;i<argc;i++){
        printf("%d: %s\n",i, argv[i]);
    }
    return 0;
}
