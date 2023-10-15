 #include <stdio.h>

int main() {
    int voters, BJP = 0, Congress = 0, JDU = 0, count = 0, input;
    scanf("%d", &voters);
    
    while(count < voters){
        printf("Enter your choice , 1 for BJP , 2 for Congress, 3 for JDU: ");
        scanf("%d", &input);

        switch(input){
            case 1:
            BJP++;
            break;
            
            case 2:
            Congress++;
            break;

            case 3:
            JDU++;
            break;

            default:
            printf("Invalid Input\n");
            break;
        }
        count++;
    }
    if(BJP > Congress && BJP > JDU){
        printf("BJP wins");
    }else if (Congress > BJP && Congress > JDU){
        printf("Congress wins");
    }else if (JDU > BJP && JDU > Congress){
        printf("JDU wins");
    }else{
        printf("Nobody wins");
    }
    return 0;
}
