#include <stdio.h>
int main (){
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    int flag=(a>b&&a>c);
    switch(flag){
        case 1:
        printf("%d is largest",a);
        break;
        case 0:
        switch(b>c){
            case 1:
            printf("%d is largest",b);
            break;
            case 0:
            printf("%d is largest",c);
            break;
            default:
            printf("Invalid entry");
            break;
        }
        break;
        default:
        printf("Invalid entry");
        break;
    
    }
    return 0;
    
   
}