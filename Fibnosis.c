// C program to generate the Fibonacci series

#include <stdio.h>

int main()
{
    int first = 0 , second = 1 , third , i , n ;
    printf("Enter a number of Terms ");
    scanf("%d" , &n);
    
    printf("Fibonosis Series = %d %d ",first , second);
    
    third = first + second ;
    for( i=3 ; i<=n ; i++){
        printf("%d " , third);
        first = second;
        second = third;
        third = first+second;
    }

    return 0;
}