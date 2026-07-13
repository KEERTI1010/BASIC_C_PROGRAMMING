// C program to find the factorial of a given number using a for loop

#include <stdio.h>

int main()
{
    int fact = 1 , i , n ;
    printf("Enter a Number ");
    scanf("%d" , &n);
    
    for( i=2 ; i<=n ; i++){
        fact = fact * i ;
    }
    printf("Factorial of Num = %d ", fact);

    return 0;
}