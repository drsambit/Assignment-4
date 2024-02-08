#include <stdio.h>
int main (){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int r=n%2;
    switch(r){
        case 1:
        printf("%d is an odd number",n);
        break;
        case 0:
        printf("%d is an even number",n);
        break;
        default:
        printf("Invalid Entry");
        break;
    }
    return 0;
}