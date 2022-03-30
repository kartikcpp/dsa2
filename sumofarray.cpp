#include<iostream>
using namespace std;
int sumofarr(int arr[],int size){
    int sum = 0;
    for (int i = 0; i < size;i++){
        sum += arr[i];
    }
    return sum;
}
int main(){

    int arr[100];
    int size;
    cin >> size;
    for (int i = 0; i < size;i++){
        cin >> arr[i];

    }

    sumofarr(arr, size);
    }