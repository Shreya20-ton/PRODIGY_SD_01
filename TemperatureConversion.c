#include<stdio.h>

void temp_conversion(int choice);

int main()
{

    int flag = 0;
    
    while(flag != 4){
        int choice;
        printf("\n\nChoose the unit you want to convert: \n");
        printf("1.Kelvin\n");
        printf("2.Celsius\n");
        printf("3.Fahrenhiet \n");
        printf("4.Exit\n");
        scanf("%d", &choice);
        flag = choice;
        temp_conversion(choice);
    }
    
    printf("\n\n");
    return 0;
}

void temp_conversion(int choice){
    float Celsius, Kelvin, Fahrenhiet;
    
     switch (choice)
    {
    case 1:
        printf("\nEnter the temperature in kelvin: \n");
        scanf("%f",&Kelvin);
        Celsius = (Kelvin - 273.15);
        Fahrenhiet = 1.8 *(Kelvin -273.15) + 32.0;
        printf("In Celsius the value is:\t %f \n",Celsius);
        printf("In Fahrenhiet the value is:\t %f",Fahrenhiet);
        break;
    case 2:
        printf("Enter the temperature in Celsius: ");
        scanf("%f",&Celsius);
        Kelvin = (Celsius + 273.15);
        Fahrenhiet = (Celsius * 1.8) + 32.0;
        printf("In kelvin the value is : %f \n",Kelvin);
        printf("In Fahrenhiet the value is: %f",Fahrenhiet);
        break;
    case 3:
        printf("Enter the temperature in fahrenhite: ");
        scanf("%f",&Fahrenhiet);
        Kelvin = (Fahrenhiet - 32.0) * 5/9 +273.15;
        Celsius = (Fahrenhiet - 32.0) * 5/9;
        printf("In Celsius the value is :\t %f \n",Celsius);
        printf("In Kevlin the value is :\t %f \n",Kelvin);
        break;
    case 4:
        printf("---------EXIT---------\n");
        break;
    default:
        printf("Please! enter a valid value \n");
        break;
    }
}