// Mean, variance, Standard Dev

#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    float a[100], sum=0, sum1=0, mean, variance, std_dev;
    
    printf("Enter Num ");
    scanf("%d", &n);
    
    printf("Enter %d Numbers ",n);
    for( i=0 ; i<n ; i++){
        scanf("%f",&a[i]);
        sum = sum + a[i];
    }
    
    mean = sum / n;
    for ( i=0 ; i<n ; i++)
    sum1 = sum1 + pow(a[i]-mean,2);
    variance = sum1/n;
    std_dev = sqrt(variance);
    printf("Mean = %f , variance = %f , Std_dev = %f ", mean,variance,std_dev);

    return 0;
}