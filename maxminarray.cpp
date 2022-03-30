#include<iostream>
using namespace std;

int getmax(int num[],int size){

    int max = INT_MIN;
    for (int i = 0; i < size;i++){
        if(num[i]>max){
            max = num[i];

        }
        
    }
    return max;
}
int getmin(int num[],int size){
        int min = INT_MAX;
        for (int i = 0; i < size;i++){
            if(num[i]<min){
                min = num[i];
            }
        }
        return min;
    }
int main(){

    //  int size;
    //   cin >> size;
    // // int num[size]; // not good practice;

    // int num[100];
    // for (int i = 0; i < size;i++){
    //     cin >> num[i];

    // }
    // cout << "max" << getmax(num, size);
    // cout << "\n min" << getmin(num, size);

    cout << max(2, 22);
    return 0;
}