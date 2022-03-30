#include<iostream>
using namespace std;
void deletion(int arr[], int index,int length){

    for (int i = index; i < length - 1;i++){
        arr[i] = arr[i + 1];
    }
    length--;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    deletion(arr, 2, 5);
    for (int i = 0; i < 4;i++){
        cout << arr[i] << "  ";
    }
}