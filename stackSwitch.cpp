#include <iostream>
using namespace std;
#define MAX 2

int stack[MAX], input, top = -1, item;

void push();
void pop();
void display();
void peek();
void operation();

int main() {
    operation();

    return 0;
}

void operation(){
    cout << "push 1 pop2 peek 3 display4" << endl;
    cin >> input;
    switch(input){
        case 1:
        push();
        break;
        
        case 2:
        pop();
        break;
        
        case 3:
        peek();
        break;
        
        case 4:
        display();
        break;
        
        default:
        cout << "Invalid input" << endl;
    }
}

void push(){
    if(top == MAX-1){
        cout << "stack overflowed" << endl;
        operation();
        return;
    }else{
        cout << "Enter item" << endl;
        cin >> item;
        stack[++top] = item;
    }
    operation();
}
void pop(){
    if(top == -1){
        cout << "stack underflowed" << endl;
        operation();
    }else{
        stack[top--] = '\0';
    }
    operation();
}
void peek(){
    if (top == -1){
        cout << "Stack is empty" << endl;
    }else{
    cout << stack[top] << endl;
    }
    operation();
}
void display(){
    if(top == -1){
        cout << "Stack is empty" << endl;
        operation();
    }else{
        int i = 0;
        while(i <= top){
            cout << stack[i++] <<" ";
        }
        cout << endl;
    }
    operation();
}
