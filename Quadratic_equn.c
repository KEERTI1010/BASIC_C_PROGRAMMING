// C program to find the roots of a quadratic equation

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, root1, root2, rpart, ipart ;
    printf("Enter Three Co-Effecient\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a==0 && b==0){
        printf("Invalid Inputs\n");
    }
    else{
        if(a==0){
            printf("Linear Equation\n");
            root1 = -c/b ;
            printf("Root =  %f", root1);
        }
        else{
            d = b*b-(4*a*c);
            if( d==0 ){
                printf("Roots are real and equal\n");
                root1 = -b/(2*a);
                root2 =root1;
                printf("Root 1 = %.3f\n and Root 2 = %.3f\n", root1 , root2);
            }
            else if(d>0){
                printf("Roots are real and distinct\n");
                root1 = -b + sqrt(b)/(2*a);
                root2 = -b - sqrt(b)/(2*a);
                printf("Root 1 = %.3f\n and Root 2 = %.3f\n", root1 , root2);
            }
            else{
                printf("Roots are imaginary\n");
                rpart = -b/(2*a);
                ipart = sqrt(fabs(d))/(2*a);
                printf("Root 1 = %.3f\n and Root 2 = %.3f\n", rpart , ipart);
            }
        }
    }

    return 0;
}