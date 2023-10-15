#include <stdio.h>

int main(){
    int num1, num2, result;
    char ch;
    printf("Enter number 1 , operation & number 3 respectively \n");
    scanf("%d %s %d", &num1, &ch, &num2);
    
    switch(ch){
        case '+':
        printf("%d", num1 + num2);
        break;

        case '-':
        printf("%d", num1 - num2);
        break;

        case '*':
        printf("%d", num1 * num2);
        break;

        case '/':
        if (num2 == 0){
            printf("Undefined");
            break;
        }else{
        printf("%d", num1 / num2);
        break;
        }
        
        default:
        printf("Invalid operation");
    }
    return 0;
}
