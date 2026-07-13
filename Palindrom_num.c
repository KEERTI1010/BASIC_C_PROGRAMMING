// C program to check whether a given number is a palindrome or not

#include <stdio.h>

int main()
{
    int temp =  0 , sum = 0 , rev = 0 , rem = 0 , n ;
    printf("Enter the Num ");
    scanf("%d",&n);
    
    temp = n ;
    while(n>0){
        rem =  n % 10 ;
        rev = rev * 10 + rem ;
        n = n / 10 ;
    }
    if ( rev == temp ){
        printf("Its is an Palindrom Num\n");
    }
    else{
        printf("Its not a Palindrom Num\n");
    }

    return 0;
}