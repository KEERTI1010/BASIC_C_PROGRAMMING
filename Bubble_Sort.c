// Bubble Sort

#include <stdio.h>

int main()
{
    int arr[10], i, j, n, temp  ;
    printf("Enter a Size of Array : ");
    scanf("%d", &n);
    
    printf("Enter a Elements : ");
    for( i=0 ; i<n ; i++)
    scanf("%d", &arr[i]);
    
    for( i=0 ; i<n-1 ; i++)
    for( j=0 ; j<n-i-1 ; j++)
    
    if(arr[j] > arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
    }
    
    printf("Sorted Array : ");
    for( i=0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
