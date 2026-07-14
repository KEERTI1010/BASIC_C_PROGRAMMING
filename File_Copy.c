// File

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *src , *dest;
    char ch;
    
    src = fopen("src.txt","r");
    if(!src){
        printf("ERROR opening src");
        return 1;
    }
    dest = fopen("dest.txt","w");
    if(!dest){
        printf("ERROR openning dest");
        fclose(src);
        return 1;
    }
    
    while ( (ch = fgetc(src))!= EOF )
        fputc(ch,dest);
        fclose(src);
        fclose(dest);
        printf("File Copied");
    return 0;
}