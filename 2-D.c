#include <stdio.h>

int main() {
    int m, n;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    printf("Enter elements:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Transpose:\n");
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < m; i++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
