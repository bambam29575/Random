
#include <iostream>
using namespace std;

int stack[100], top = -1, input; char ch, ch2;

void push();
void pop();
void peek();
void printStack();
void stackArr();

int main() {
    stackArr();

    return 0;
}
void push(){
        cout << "which item you want to push?" << endl;
        cin >> input;
        top++;
        stack[top] = input;
        printStack();
        stackArr();
        return;
        
    } 
    void pop(){
    	if(top == -1){
    		cout << "Stack Underflow" << endl;
		}else if(top != -1){
        stack[top] = '\0';
        top--;
    }
	if(top != -1){
        printStack();
    }
        stackArr();
        return;
    }
    void peek(){
    	if(top == -1){
    		cout << "Stack Underflow" << endl;
    		
		}else if(top != -1){
		
        cout << stack[top] << endl;
        
    }
    stackArr();
        return;
    }
    void printStack(){
        cout <<"Stack: ";
        for(int i = 0; i <= top; i++){
            cout <<  stack[i]<< " ";;
        }
        cout << endl;
    }
    void stackArr(){
    cout << "Push p, pop d, peek s" << endl << "Which operation do  you want to perform?" << endl;
    cin >> ch;
    if (ch == 'p'){
        push();
    }else if(ch == 'd'){
        pop();
    }else if(ch == 's'){
        peek();
    }else if(ch == 'e'){
        
    }else
        cout << "Invalid choice" << endl;
    }
