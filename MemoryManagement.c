#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int* array1 = (int*) malloc(5 * sizeof(int));
    int i;
    if(array1 == NULL){
        printf("Couldn't allocate\n");
        return 1;
    }

    for(i = 0;i<5;i++){
        array1[i] = i*5;
    }

    int* array_copy = (int*)malloc(5 * sizeof(int));
    if(array_copy == NULL){
        printf("Couldn't allocate for 2nd\n");
        return 1;
    }

    memcpy(array_copy,array1,5*sizeof(int));

    for(i = 0;i<5;i++){
        printf("Array idx : %d, Value : %d\n",i,array_copy[i]);
    }

    free(array1);
    free(array_copy);

    return 1;

}
