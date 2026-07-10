#include <stdio.h>
#define MAX 10 // idhu mela irukanum

// Function declarations
void addMatrix(int a[MAX][MAX], int b[MAX][MAX], int r, int c);
void multiplyMatrix(int a[MAX][MAX], int b[MAX][MAX], int r1, int c1, int c2);
void transposeMatrix(int a[MAX][MAX], int r, int c);
void inputMatrix(int a[MAX][MAX], int r, int c);
void printMatrix(int a[MAX][MAX], int r, int c);

int main()
{
    int a[MAX][MAX], b[MAX][MAX];
    int r1, c1, r2, c2, choice;

    printf("=== MATRIX OPERATIONS ===\n");
    printf("1. Matrix Addition\n");
    printf("2. Matrix Multiplication\n");
    printf("3. Matrix Transpose\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nEnter rows and columns: ");
            scanf("%d %d", &r1, &c1);
            printf("Enter Matrix A:\n");
            inputMatrix(a, r1, c1);
            printf("Enter Matrix B:\n");
            inputMatrix(b, r1, c1);
            addMatrix(a, b, r1, c1);
            break;

        case 2:
            printf("\nEnter rows cols for A: ");
            scanf("%d %d", &r1, &c1);
            printf("Enter rows cols for B: ");
            scanf("%d %d", &r2, &c2);
            if(c1!= r2)
                printf("Multiplication not possible!");
            else
            {
                printf("Enter Matrix A:\n");
                inputMatrix(a, r1, c1);
                printf("Enter Matrix B:\n");
                inputMatrix(b, r2, c2);
                multiplyMatrix(a, b, r1, c1, c2);
            }
            break;

        case 3:
            printf("\nEnter rows and columns: ");
            scanf("%d %d", &r1, &c1);
            printf("Enter Matrix:\n");
            inputMatrix(a, r1, c1);
            transposeMatrix(a, r1, c1);
            break;

        default:
            printf("Invalid choice!");
    }
    return 0;
}

void inputMatrix(int a[MAX][MAX], int r, int c)
{
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
}

void printMatrix(int a[MAX][MAX], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

void addMatrix(int a[MAX][MAX], int b[MAX][MAX], int r, int c)
{
    int sum[MAX][MAX];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];
    printf("\nResult of Addition:\n");
    printMatrix(sum, r, c);
}

void multiplyMatrix(int a[MAX][MAX], int b[MAX][MAX], int r1, int c1, int c2)
{
    int mul[MAX][MAX] = {0};
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++)
            for(int k = 0; k < c1; k++)
                mul[i][j] += a[i][k] * b[k][j];
    printf("\nResult of Multiplication:\n");
    printMatrix(mul, r1, c2);
}

void transposeMatrix(int a[MAX][MAX], int r, int c)
{
    int trans[MAX][MAX];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            trans[j][i] = a[i][j];
    printf("\nTranspose of Matrix:\n"); // inga dhan fix pannen
    printMatrix(trans, c, r);
}
