#include <iostream>
using namespace std;

int array[100], top = -1;

void push(int num){
    top++;
    array[top] = num;
    return;
}
void pop(){
    array[top] = '\0';
    top--;
    return;
}
void peek(){
    cout << "Top element : " << array[top] << endl;
    return;
}
void printStack(){
    for(int i = 0; i <= top; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return;
}
int main(){
    push(10);
    push(20);
    push(30);
    printStack();
    pop();
    printStack();
    peek();
    push(40);
    push(50);
    printStack();
    pop();
    printStack();
    peek();

    return 0;
}
