//Allen Bernard R. Aurellano BSCS - 1A

#include <stdio.h>
#define MAX 10

void transpose(int n, int A[MAX][MAX], int T[MAX][MAX]);
void rowSums(int n, int A[MAX][MAX], int sums[MAX]);
void colSums(int n, int A[MAX][MAX], int sums[MAX]);
int totalSum(int n, int A[MAX][MAX]);
int isSymmetric(int n, int A[MAX][MAX]);
void multiply(int n, int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX]);

int main() {
    int n;
    int A[MAX][MAX], T[MAX][MAX], B[MAX][MAX];
    int out[MAX], in[MAX];
    
    FILE *fp = fopen("graph.in", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    fscanf(fp, "%d", &n);
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            fscanf(fp, "%d", &A[i][j]);
    
    fclose(fp);
    
    printf("Adjacency Matrix A (N = %d)\n", n);
    printf("        ");
    for(int j = 0; j < n; j++) printf("%d   ", j);
    printf("\n");
    for(int i = 0; i < n; i++) {
        printf("%d |     ", i);
        for(int j = 0; j < n; j++)
            printf("%d   ", A[i][j]);
        printf(" | ");
        rowSums(n, A, out);
        printf("out = %d\n", out[i]);
    }
    printf("-------------------------------------\n");

    colSums(n, A, in);
    
    printf("in:     ");
    for(int i = 0; i < n; i++)
        printf("%d   ", in[i]);
    printf("\n");
    
    printf("Total direct routes = %d\n", totalSum(n, A));

    if(isSymmetric(n, A))
        printf("Graph Type: UNDIRECTED\n");
    else
        printf("Graph Type: DIRECTED\n");

    transpose(n, A, T);
    printf("\n\nTranspose Matrix T\n");
    printf("        ");
    for(int j = 0; j < n; j++) printf("%d   ", j);
    printf("\n");
    for(int i = 0; i < n; i++) {
        printf("%d |     ", i);
        for(int j = 0; j < n; j++)
            printf("%d   ", T[i][j]);
        printf("\n");
    }

    multiply(n, A, A, B);
    printf("\n\nTwo-Step Paths Matrix B = A x A\n");
    printf("        ");
    for(int j = 0; j < n; j++) printf("%d   ", j);
    printf("\n");
    for(int i = 0; i < n; i++) {
        printf("%d |     ", i);
        for(int j = 0; j < n; j++)
            printf("%d   ", B[i][j]);
        printf("\n");
    }
    return 0;
}

void transpose(int n, int A[MAX][MAX], int T[MAX][MAX]) {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            T[j][i] = A[i][j];
}

void rowSums(int n, int A[MAX][MAX], int sums[MAX]) {
    for(int i = 0; i < n; i++) {
        sums[i] = 0;
        for(int j = 0; j < n; j++)
            sums[i] += A[i][j];
    }
}

void colSums(int n, int A[MAX][MAX], int sums[MAX]) {
    for(int j = 0; j < n; j++) {
        sums[j] = 0;
        for(int i = 0; i < n; i++)
            sums[j] += A[i][j];
    }
}

int totalSum(int n, int A[MAX][MAX]) {
    int total = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            total += A[i][j];
    return total;
}

int isSymmetric(int n, int A[MAX][MAX]) {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(A[i][j] != A[j][i])
                return 0;
    return 1;
}

void multiply(int n, int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX]) {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            C[i][j] = 0;
            for(int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}