// Reverse String

#include <stdio.h>
#include <string.h>

void reverse (char *s){
    int len = strlen(s);
    
    for(int i=0 ; i<len/2 ; i++){
        char temp=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=temp;
    }
}

int main()
{
    char s[100];
    printf("Enter a String ");
    scanf("%s",s);
    reverse(s);
    printf("Reversed = %s ", s);

    return 0;
}