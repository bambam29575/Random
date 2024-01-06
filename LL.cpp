#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *link;
};

struct node *ptr, *head, *tail, *temp;
    char ch;
    int count = 1;

void create (){
    cout <<"Enter yout first data" << endl;
    ptr = (struct node *) malloc(sizeof(struct node));
    cin >> ptr->data;
    head = ptr;
    tail = ptr;

    do{
        count++;
        cout << "Enter the next data" << endl;
        ptr = (struct node *) malloc(sizeof(struct node));
        cin >> ptr->data;
        tail->link = ptr;
        tail = ptr;
        cout << "Do you want to create next node ? " << endl;
        cin >> ch ;

    }while(ch == 'y');

}

void printLinkedlist(){
    temp = head;
    cout << "Linkedlist : ";
    for(int i = 1; i <= count; ++i){
        cout << temp->data<< " ";
        temp = temp->link;
    }
}

int main(){

    create();
    printLinkedlist();

    return 0;
}
