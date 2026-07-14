// Prime Num range

#include <stdio.h>

int isPrime(int n){
    int i ;
    if(n<=1){
        return 0;
    }
    for(i=2 ; i<=n/2 ; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

void primeRange(int start, int end){
    int i;
    for(i=start ; i<=end ; i++){
        if(isPrime(i)){
            printf("%d", i);
        }
    }
}

void main()
{
    int start , end;
    printf("Enter a Range %d %d (start,end) : ");
    scanf("%d %d", &start,&end);
    printf("Prime Numbers Between %d and %d are  ", start , end );
    primeRange(start , end);
}