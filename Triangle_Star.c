// C program to print a right-angled triangle star (*) pattern using nested for loops

#include <stdio.h>

int main()
{
    int i , j , n;
    printf("Enter a Num of Rows ");
    scanf("%d" , &n);
    
    for( i=0 ; i<n ; i++){
        for( j=0 ; j<=i ; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

