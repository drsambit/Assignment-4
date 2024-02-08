#include <stdio.h>
int main (){
    int a,b;
    char op;
    printf ("Enter first number");
    scanf("%d",&a);
    printf ("Enter second number");
    scanf("%d",&b);
    printf ("Enter an arithmetic operator");
    scanf(" %c",&op);
    switch(op){
        case '+':
        printf("Sum=%d",a+b);
        break;
        case '-':
        printf("Difference=%d",a-b);
        break;
        case '*':
        printf("Product=%d",a*b);
        break;
        case '/':
        printf("Quotient=%d",a/b);
        break;
        default:
        printf("Invalid entry");
        break;
    }
    return 0;
}