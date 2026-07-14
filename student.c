// Student

#include <stdio.h>

struct Student
{
    int r_no ;
    char name [10] ;
    int marks [6];
};

int main()
{
    struct Student s[100];
    int n, i, j;
    printf("Enter a No of Students ");
    scanf("%d" , &n);
    
    for( i=0 ; i<n ; i++){
        printf("Enter R.no and Name of Student %d ", i+1);
        scanf("%d %s" , &s[i].r_no , &s[i].name);
        
        printf("Enter Marks of 6 Subjects: ");
        for ( j=0 ; j<6 ; j++){
            scanf("%d" , &s[i].marks[j]);
        }
        
        for( i=0 ; i<n ; i++){
            printf("R.No : %d , Name : %s , Marks : ", s[i].r_no,s[i].name);
            for( j=0 ; j<6 ; j++){
                printf("%d ", s[i].marks[j]);
            }
        }
    }

    return 0;
}