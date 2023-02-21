#include <stdio.h>
#include <malloc.h>


void input(int size, int *Ptr) {
    for(int i = 0; i < size; i++ ){
        printf("\n Input element %d :", i);
        scanf("%d", Ptr+i);
    }
}

void sum (int size, int *Ptr) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + *(Ptr+i);
    }
    printf("Sum of all elements in array = %d\n", sum);
}

int main(){
    int a, *aPtr;
    printf("\nInput the size of Array");
    scanf("%d", &a);

    aPtr = (int*)calloc(a, sizeof(int));

    input(a, aPtr);
    sum(a, aPtr);
}


