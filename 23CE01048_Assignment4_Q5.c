#include <stdio.h>
int main (){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int a=n,s=0;
    while(n>0){
        int d=n%10;
        s=s+(d*d*d);
        n=(int)(n/10);
    }
    int flag=(s==a);
    switch((a<100)||(a>999)){
        case 1:
        printf("incorrect input");
        break;
        case 0:
        switch (flag){
            case 1:
            printf("Yes %d is an Armstrong number",a);
            break;
            case 0:
            printf("No %d is not an armstrong number",a);
            break;
            default:
            printf("Invalid entry");
            break;
    
        }
        break;
        default:
        printf("Inavid entry");
        break;

    }
    return 0;
}