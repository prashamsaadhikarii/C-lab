#include <stdio.h>

int main() {
    int m1, n1, m2, n2;

    printf("Enter rows and cols of Matrix A: ");
    scanf("%d %d", &m1, &n1);

    printf("Enter rows and cols of Matrix B: ");
    scanf("%d %d", &m2, &n2);

    if(n1 != m2) {
        printf("Multiplication not possible!");
        return 0;
    }

    int A[m1][n1], B[m2][n2], C[m1][n2];

    printf("Enter Matrix A:\n");
    for(int i=0;i<m1;i++)
        for(int j=0;j<n1;j++)
            scanf("%d",&A[i][j]);

    printf("Enter Matrix B:\n");
    for(int i=0;i<m2;i++)
        for(int j=0;j<n2;j++)
            scanf("%d",&B[i][j]);

    for(int i=0;i<m1;i++) {
        for(int j=0;j<n2;j++) {
            C[i][j] = 0;
            for(int k=0;k<n1;k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Result:\n");
    for(int i=0;i<m1;i++) {
        for(int j=0;j<n2;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }

    return 0;
}
