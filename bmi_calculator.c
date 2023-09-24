#include <stdio.h>
#include <stdlib.h>

int main() {
    // to calculate BMI

    char name[100];
    float height,weight;
    printf("enter your name :");
    scanf("\n%s",name);


    printf("enter your height in meters : ");
    scanf("\n%f",&height);

    printf("enter your weight in kilograms :");
    scanf("\n%f",&weight);

    float BMI;

    BMI= weight /(height*height);

    printf("\n%s your BMI is %f" ,name,BMI);

    if(BMI<18.5)
    {
        printf("\nyour are underweight");
    }
    else if (18.5<BMI<24.9)
    {
         printf("\nyou have normal weight");
    }
    else if (25<BMI<29.9)
    {
         printf("\nyour are overweight");
    }
    else
    {
     printf("\nyou are obese");
    }


    return 0;
}
