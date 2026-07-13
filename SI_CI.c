// SIMPLE INTREST AND COMPOUND INTREST

#include <stdio.h>
#include <math.h>

int main()
{
    float SI = 0 , CI = 0 , rate , A ;
    int p , time;
    
    printf("Enter a Principle Amount\n");
    scanf("%d",&p);
    
    printf("Enter Rate\n");
    scanf("%f",&rate);
    
    printf("Enter Time\n");
    scanf("%d",&time);
    
    SI = (rate*time*p)/100;
    printf("Simple Interest = %f\n", SI);
    
    A = p*(pow(1+(rate/100),time));
    CI = A-p;
    printf("Compound Intrest = %f\n", CI);

    return 0;
}