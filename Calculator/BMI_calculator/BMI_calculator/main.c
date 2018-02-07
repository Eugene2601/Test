#include <stdio.h>
#include <stdlib.h>
/// function for adding numbers
float height;
int weight;
float ans1;
float ans2;
float ans3;




int main()
{

    int sel = 0;

    printf("Welcome to my BMI calculator \n");
    int loop;
    while(loop){

        /// This is user input

        printf("Please enter your height in meters: ");
        scanf("%f", &height);
        printf("Please enter your weight in kilograms: ");
        scanf("%d", &weight);

        /// Here is the calculations for the BMI

        ans1 = height * height;
        ans2 = weight / ans1;

        /// BMI is printed


        printf("\nYour BMI is : ");
        printf("%.2f", ans2);
        printf("\n");
        printf("\nUnderweight is a BMI < 18.5 \n");
        printf("Normal range is between 18.5 and 25 \n");
        printf("Overweight is between 25 and 30 \n");
        printf("Obese is BMI > 30");

        /// User is asked if program should be run again


        printf("\n\nWould you like to try again?(1/0)\n");
        scanf("%d", &loop);
    }
        }
