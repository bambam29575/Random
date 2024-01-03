#include <iostream>
using namespace std;

// void insert(int *arr,int value, int index, int size)
// {
//    while(size != index){
//       arr[size -1 ] == arr[size -2];
//       size--;
//    }
//    arr[size] == value;
//    return;
// }


void display(int arr[], int index)
{
    cout << "The element at index : " << arr[index] << endl;
}


void search(int arr[], int element)
{
    int i = 0;
    for(int i = 0; arr[i] != '\0'; ++i){
         if (arr[i] == element){
            cout << "The element is present at index : " << i << endl;
            return;
        }
    }
   
}


void del(int *arr, int index)
{   
    arr[index] == NULL;
    while((index+1) != NULL){
        arr[index] == arr[index+1];
        index++;
    }
}


int main(){
    int arr[6] = {1,2,3,4}, size = sizeof(arr)/sizeof(int), no = 1;

    for (int i =1 ; arr[i] !='\0' ; i++)
{
    no++;
}
cout << no << endl;
    // insert(arr,7,2, size-1);
    display(arr,3);
    search(arr,3);
    // del(arr,2);

    return 0;
}
