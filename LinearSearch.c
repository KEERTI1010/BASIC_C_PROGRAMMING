// C program to perform Linear Search on an array

#include <stdio.h>

int main()
{
    int i , n , key , found=0 , arr[10];
    
    printf("Enter a number of Element :\n");
    scanf("%d", &n);
    
    printf("Enter all Elements\n");
    for( i=0 ; i<n ; i++)
    scanf("%d", &arr[i]);
    
    printf("Enter a Key Element to find :\n");
    scanf("%d", &key);
    
    for( i=0 ; i<n ; i++){
        if(arr[i]==key){
            found = 1;
            break;
        }
    }
    if(found == 1){
        printf("Element found at index %d \n ", i);
    }
    else{
        printf("Element Not Found");
    }

    return 0;
}