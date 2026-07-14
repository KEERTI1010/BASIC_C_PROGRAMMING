// Write a C program to read n integer elements into an array and find the largest element using pointers

#include <stdio.h>

int main()
{
    int *largest , i, n, arr[10] ;
    printf("Enter asize of Element : ");
    scanf("%d", &n);
    
    printf("Enter array elements : ");
    for( i=0 ; i<n ; i++ ){
        scanf("%d", &arr[i]);
    }
    largest = &arr[0];
    for(i=1 ; i<n ; i++){
        if(arr[i] > *largest){
            largest = &arr[i];
        }
    }
        printf("Largest Element = %d ",*largest);

    return 0;
}
