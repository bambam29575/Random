 #include <stdio.h>

int main() {
    int voters, party1 = 0, party2 = 0, party3 = 0, count = 0, input;
    printf("Enter no of voters\n");
    scanf("%d", &voters);
    
    while(count < voters){
        printf("Enter your choice , 1 for party1, 2 for party2, 3 for party3: ");
        scanf("%d", &input);

        switch(input){
            case 1:
            party1++;
            break;
            
            case 2:
            party2++;
            break;

            case 3:
            party3++;
            break;

            default:
            printf("Invalid Input\n");
            break;
        }
        count++;
    }
    if(party1 > party2 && party1 > party3){
        printf("party1 wins");
    }else if (party2 > party1 && party2 > party3){
        printf("party2 wins");
    }else if (party3 > party1 && party3 > party2){
        printf("party3 wins");
    }else{
        printf("Nobody wins");
    }
    return 0;
}
