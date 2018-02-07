#include <stdio.h>
#include <stdlib.h>
#include "Func.h"
/// function for adding numbers
float num1;
float num2;
int sel = 0;




int main()
{



    printf("Welcome to my calculator \n");
    int loop;
    while(loop){
        printf("Please enter your first number: ");
        scanf("%f", &num1);
        printf("Please enter your second number: ");
        scanf("%f", &num2);
        printf("What would you like to do? (1: Add. 2: Subtract. 3: Multiply. 4: Devide)\n");
        scanf("%d", &sel);


        func(num1, num2, sel);


        }
        printf("\nWould you like to try again?(1/0)\n");
        scanf("%d", &loop);
    }

