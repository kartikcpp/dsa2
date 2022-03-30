#include<iostream>
using namespace std;

void leftrotate(int arr[],int length){
    int temp = arr[0];

    for (int i = 0; i < length - 1;i++){
        arr[i] = arr[i + 1];
    }
    arr[length - 1] = temp;
}
void rightrotate(int arr[],int length){
    int temp=arr[length-1];
    for (int i = length - 1; i >= 1;i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

int main(){
    int arr[] = {1, 2,3,4,5};
    for (int i = 0; i < 2;i++){
         leftrotate(arr, 5);
         rightrotate(arr, 5);
    }
       
    for (int i = 0; i < 5;i++){
        cout << arr[i] << " ";
    }
}