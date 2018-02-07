#include <stdio.h>
#include <stdlib.h>
/// function for adding numbers
float num1;
float num2;





int main()
{

    int sel = 0;

    printf("Welcome to my calculator \n");
    int loop;
    while(loop){
        printf("Please enter your first number: ");
        scanf("%f", &num1);
        printf("Please enter your second number: ");
        scanf("%f", &num2);
        printf("What would you like to do? (1: Add. 2: Subtract. 3: Multiply. 4: Devide)\n");
        scanf("%d", &sel);

        if(sel == 1){
            float ans = num1 + num2;

            printf("%f", ans);
            }

        if(sel == 2){
            float ans = num1 - num2;

            printf("%f", ans);
        }
        if(sel == 3){
            float ans = num1 * num2;

            printf("%f", ans);

        }
        if(sel == 4){
            float ans = num1 / num2;

            printf("%f", ans);
        }
        printf("\nWould you like to try again?(1/0)\n");
        scanf("%d", &loop);
    }
        }
