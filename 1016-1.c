#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr= malloc(sizeof(int));
    if (ptr == NULL){
        printf("無效");
        return 1;
    }

    *ptr = 10;
    printf("%d",*ptr);
}