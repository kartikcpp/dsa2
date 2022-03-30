#include<iostream>
using namespace std;


void insert(int arr[],int n,int length,int key,int index){

    if(length<n){

        for (int i = length - 1; i >= index;i--){

            arr[i + 1] = arr[i];
        }
        arr[index] = key;
        length++;
    }
}

int main(){
    int arr[7] = {1, 2, 3, 4, 5, 6};
    insert(arr, 7, 6, 200, 3);
    for (int i = 0; i < 7;i++){
        cout << arr[i] << " ";
    }
}