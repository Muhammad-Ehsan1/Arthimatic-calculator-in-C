#include<stdio.h>
#include<math.h>

void main()
{
    float num1;
    float num2;
    char opr;
    float result;
    
    printf("Enter first number : ");
    scanf("%f",&num1);
    printf("Enter +,-,*,/,p : ");
    scanf(" %c",&opr);
    printf("Enter Second Number : ");
    scanf("%f",&num2);
    
    switch (opr)
    {
    case '-' : 
    result = num1-num2;
    printf("%.4f",result);
        break;
    case '+' : 
    result = num1+num2;
    printf("%.4f",result);
        break;
    case '*' : 
    result = num1*num2;
    printf("%.4f",result);
        break;
    case '/' : 
    result = num1/num2;
    printf("%.4f",result);
        break;
    case 'p' : 
    result = pow(num1,num2);
    printf("%.4f",result);
        break;
    default:
    printf("Enter valid operator");
    }
}
