// C program to read n integer elements into an array and find the sum of all elements using pointers


#include <stdio.h>

int main()
{
    int arr[10], n, i, sum=0, *ptr;
    printf("Input no of Elements to store ");
    scanf("%d", &n);
    
    printf("Input %d of Element in Array\n ",n);
    for( i=0 ; i<n ; i++){
        printf("Element %d : ", i+1);
        scanf("%d",&arr[i]);
    }
    
    ptr = arr;
    for( i=0 ; i<n ; i++){
        sum = sum+*ptr;
        ptr ++ ;
    }
    printf("The sum of Array is %d ", sum);

    return 0;
}