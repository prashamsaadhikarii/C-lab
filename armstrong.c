#include <stdio.h>
#include <math.h>

int main() {
    int n, count=0, sum=0, temp, rem;

    printf("Enter number: ");
    scanf("%d",&n);

    temp = n;

    // Count digits
    while(temp != 0){
        count = count + 1;
        temp = temp / 10;
    }


    temp = n;

    // Calculate Armstrong sum
    while(temp != 0){
        rem = temp % 10;
        sum = sum + pow(rem, count);
        temp = temp / 10;
    }

    if(sum == n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong");

    return 0;
}
