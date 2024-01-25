
#include <iostream>
using namespace std;

string stack, infix, postfix;
int i = 0, j = 0, k = 0, m = 0;
char ch;

void pop(char ch){
    
}

int precedence(char ch){
    if(ch == '+' || ch == '-' ){
        return 1;
    }
    else if(ch == '*' || ch == '/' ){
        return 2;
    }else return 3;
    
}

int isOperator(char ch){
    if(ch == '/' || ch == '*' || ch == '-' || ch == '+'){
        return 1;
    }else return 0;
}

string infToPos(string infix){
    while(infix[m] != '\0'){
    if(isOperator(infix[i]) != 1){
       postfix[j] = ch;
          j++;
    }
    if (isOperator(infix[i]) == 1){
        if(k > 0){
        // stack[k] = ch;
        // k++;
        if (precedence(stack[k]) <= precedence(stack[k-1])){
            int temp = k;
            do{
            pop(stack[k]);
            k--;
            }while(precedence(stack[k]) == 1);
        }
        }
    }
    m++;
    }
}



int main() {
    cout << "Enter infix  expression" << endl;
    cin >> infix;
    postfix = infToPos(infix);
    cout << postfix << endl;
    

    return 0;
}
