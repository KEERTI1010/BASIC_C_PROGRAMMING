// C program to read two matrices and compute their product if the matrices are compatible for multiplication

#include <stdio.h>

int main()
{
    int a[20][20], b[20][20], c[20][20], m, n, p, q, i, j, k ;
    printf("Enter a Row and Column of A \n");
    scanf("%d %d", &m , &n);
    
    printf("Enter a Row and Column of B \n");
    scanf("%d %d", &p , &q);
    
    if(n != p){
        printf("Multiplication is Impossible");
        return 1;
    }
    else{
        printf("Enter a Matrix A : \n");
        for( i=0 ; i<m ; i++)
        for( j=0 ; j<n ; j++)
        scanf("%d", &a[i][j]);
        
        printf("Enter a Matrix B : \n");
        for( i=0 ; i<p ; i++)
        for( j=0 ; j<q ; j++)
        scanf("%d", &b[i][j]);
        
        for( i=0 ; i<m ; i++)
        for( j=0 ; j<q ; j++){
            c[i][j] = 0;
            for( k=0 ; k<n ; k++){
            c[i][j] = c[i][j] + a[i][k]*b[k][j];
            }
        }
    }
        printf("Result:\n");
        for( i=0 ; i<m ; i++){
            for( j=0 ; j<q ; j++)
                printf("%d ", c[i][j]);
                printf("\n");
        }
    return 0;
}