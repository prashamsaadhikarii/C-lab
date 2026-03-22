#include <stdio.h>

int main() {
    int a = 4, b = 3;
    
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    printf("Bitwise AND (a & b) = %d\n", a & b);
    printf("Bitwise OR (a | b) = %d\n", a | b);
    printf("Bitwise XOR (a ^ b) = %d\n", a ^ b);
    printf("Bitwise complement (~a) = %d\n", ~a);
    
    return 0;
}
