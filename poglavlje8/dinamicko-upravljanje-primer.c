#include <stdio.h>
#include <stdlib.h>

int main(){

    int * array = (int *) malloc(10*sizeof(int));
    int * array1 = (int *) calloc(10,sizeof(int));
    int i;
    for(i=0;i<10;i++){
        *(array+i) = 10+i;
        array1[i] = 20+i;
    }
    for(i=0;i<10;i++){
        printf("%d\n",array[i]);
        printf("%d\n",*(array1+i));
    }
    array = realloc(array,12*sizeof(int));
    array[10] = 100;
    array[11] = 200;
    for(i=0;i<12;i++){
        printf("%d\n",array[i]);
    }
    free(array);
    free(array1);
    return 0;
}
