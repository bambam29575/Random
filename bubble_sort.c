#include <stdio.h>
#include <stdlib.h>

int input,*arr, bubble;
void printArray(int arr[], int input);

void bubbleSort(int arr[], int input)
{
    for(int i = 0; i<input; i++)
    {
        for(int j = 0; j<input-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
               int temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
            }
        }
    }
    printArray(arr,input);
}
void printArray(int arr[], int input)
{
    for(int i = 0; i < input; i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{

scanf("%d",&input);
arr = (int*)calloc(input,sizeof(int));
for(int i = 0; i < input; i++)
{
    scanf("%d",&arr[i]);
}
bubbleSort(arr,input);
return 0;
}
