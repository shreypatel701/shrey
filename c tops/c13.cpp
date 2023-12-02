#include <stdio.h>

add(int  a, int  b) 
{
    a + b;
}

subtract(int  a, int  b) 
{
     a - b;
}

multiply(int a, int b) 
{
     a * b;
}

divide(int a , int  b)
{
a / b;
}

main() 
{
    int number1, number2;

    printf("Enter two numbers: ");
    scanf("%d \n%d", &number1, &number2);

    printf("addtion::> %d\n", add(number1, number2));
    printf("subtraction::> %d\n", subtract(number1, number2));
    printf("multiplycation::> %d\n", multiply(number1, number2));
    printf("division::> %d\n", divide(number1, number2));

}
