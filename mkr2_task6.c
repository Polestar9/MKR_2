#include <stdio.h>

void inputMatrixSize(int *n, int *m) 
{
    printf("Input the line amount: ");
    scanf("%d", n);
    printf("Input the column amount: ");
    scanf("%d", m);
}
void calculateMatrixValues(int n, int m, int C[n][m]) 
{
    for (int i = 0; i < n; i++) 
    {
    for (int j = 0; j < m; j++) 
    {
    if (i<j) 
    {
    C[i][j] = i + j;
    }
    if (i>=j)
    {
    C[i][j] = i*i - j*j;
    }
    }
    }
}
void outputMatrix(int n, int m, int C[n][m]) 
{
    printf("Input matrix elements:\n");
    for (int i = 0; i < n; i++) 
    {
    for (int j = 0; j < m; j++) 
    {
    printf("%d\t", C[i][j]);
    }
    printf("\n");
    }
}
int main() 
{
    int n, m;
    inputMatrixSize(&n, &m);
    int C[n][m];
    calculateMatrixValues(n, m, C);
    outputMatrix(n, m, C);
    return 0;
}