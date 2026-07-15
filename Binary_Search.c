// Binary Search using Array


#include <stdio.h>

int main()
{
    int i , n , key , first, last, mid , arr[10];
    
    printf("Enter a number of Element :\n");
    scanf("%d", &n);
    
    printf("Enter all Elements\n");
    for( i=0 ; i<n ; i++)
    scanf("%d", &arr[i]);
    
    printf("Enter a Key Element to find :\n");
    scanf("%d", &key);
    
    first = 0;
    last = n-1;

    while( first <= last ){
        mid = ( first + last ) / 2;
        if(arr[mid] ==  key ){
            printf("Found at Index %d" , mid);
            return 0;
        }
        else
        if(arr [mid] < key )
        first = mid + 1 ;
    else
    last = mid - 1 ;
    }
    prinf("Not Found");

    return 0;
}