// C program checks whether a given 3-digit number is an Armstrong number

#include <stdio.h>

int main()
{
    int n , rem , sum = 0 , temp ;
    printf("Enter a 3 Digit Num ");
    scanf("%d",&n);
    
    temp = n;
    while(n>0){
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }
    if(sum == temp){
        printf("%d is an AramStrong Num", temp);
    }
    else{
        printf("%d is not an AramStrong Num", temp);
    }

    return 0;
}