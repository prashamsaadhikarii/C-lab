#include<stdio.h>

void swap(int a, int b);

int main() {
    int i, j;
    printf("Enter i and j values: ");
    scanf("%d %d", &i, &j);

    printf("Before swapping: %d %d\n", i, j);
    swap(i, j);
    // i and j will remain unchanged here
    printf("After swapping: %d %d\n", i, j);

    return 0;
}

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    // Swap only happens within this function's scope
}
