#include <stdio.h>

int main (){

    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (op) {
        case '+':
            printf("The result is: %d\n", num1 + num2);
            break;
        case '-':
            printf("The result is: %d\n", num1 - num2);
            break;
        case '*':
            printf("The result is: %d\n", num1 * num2);
            break;
        case '/':
            printf("The result is: %d\n", num1 / num2);
            break;
        default:
            printf("Invalid operator\n");
            break;
    }
    return 0;
}
