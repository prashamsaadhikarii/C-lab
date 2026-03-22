#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int i, j;
    printf("Enter i and j values: ");
    scanf("%d %d", &i, &j);

    printf("Before swapping: %d %d\n", i, j);
    swap(&i, &j); // Passing the addresses of i and j
    
    // i and j are now swapped
    printf("After swapping: %d %d\n", i, j);

    return 0;
}

void swap(int *a, int *b) {
    int temp;
    temp = *a;  // temp gets value at address a
    *a = *b;    // value at address a gets value at address b
    *b = temp;  // value at address b gets temp
}


