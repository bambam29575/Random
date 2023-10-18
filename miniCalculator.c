//MINI CALCULATOR
#include <stdio.h>
#include <math.h>

int main(){
    float num1, num2, result, flag = 0;
    int choice;
    printf(" 1 -> Addition\n");
    printf(" 2 -> subtraction\n");
    printf(" 3 -> Multiplication\n");
    printf(" 4 -> Division\n");
    printf(" 5 -> log\n");
    printf(" 6 -> log10\n");
    printf(" 7 -> sin\n");
    printf(" 8 -> cos\n");
    printf(" 9 -> tan\n");
    printf(" 10 -> pow\n");
    printf("Enter number 1 : \n");
    scanf("%f", &num1);
    printf("Enter your choice\n");
    scanf("%d", &choice);
    printf("Enter number 2 : \n");
    scanf("%f", &num2);
    switch(choice){
        case 1:
        result = num1 + num2;
        break;
        case 2:
        result = num1 - num2;
        break;
        case 3:
        result = num1*num2;
        break;
        case 4:
        if(num2 > 0){
        result = num1/num2;
        }else{
            printf("Undefined\n");
        }
        break;
        case 5:
        if(num1 > 0)
        {
        result = log(num1);
        }
        break;
        case 6:
        if(num1 > 0){
        result = log10(num1);
        }
        break;
        case 7:
        result = sin(num1 * M_PI/180);
        break;
        case 8:
        result = cos(num1 * M_PI /180) ;
        break;
        case 9:
        result = tan(num1 * M_PI /180);
        break;
        case 10:
        result = pow(num1, num2);
        break;
        default:
        printf("INvalid choice\n");
        flag = 1;
        break;
    }
    if (flag == 0){
    printf("Answer : %f", result);
    }
    
    return 0;
}
