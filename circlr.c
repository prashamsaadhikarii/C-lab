#include <stdio.h>
#define PI 3.14 // Macro constant

int main() {
    const float pi = 3.14; // Const keyword
    float r = 5;
    
    float area1 = PI * r * r;
    float area2 = pi * r * r;
    
    printf("Area using #define = %.2f\n", area1);
    printf("Area using const = %.2f\n", area2);
    return 0;
}
