#include <stdio.h>

int main() 
{
    float num1, num2, result;
    char op;
    
    printf("=== BASIC CALCULATOR ===\n");
    printf("Choose Operation: +  -  *  /\n\n");
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter operator: ");
    scanf(" %c", &op);  
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    
    switch(op)
    {
        case '+':
            result = num1 + num2;
            printf("\nResult: %.2f + %.2f = %.2f", num1, num2, result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("\nResult: %.2f - %.2f = %.2f", num1, num2, result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("\nResult: %.2f * %.2f = %.2f", num1, num2, result);
            break; 
            
        case '/':
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("\nResult: %.2f / %.2f = %.2f", num1, num2, result);
            }
            else
            {
                printf("\nError! Division by zero not allowed.");
            }
            break;
            
        default:
            printf("\nInvalid operator! Please enter +, -, * or /");
    }
    
    return 0;
}
