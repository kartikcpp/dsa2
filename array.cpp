#include<iostream>
using namespace std;

void printarray(int arr[3],int size){
 int n = size;
    for (int i = 0; i < n ;i++){
        cout << arr[i]<<"  ";
    }
}
int main(){

    // int numberr[15]={99,89,90};
    // cout << numberr[2]<<endl;
    // cout<<numberr[232];
    // return 0;
    // int third[15] = {2, 7,2,22,21,21,223,243,2232,2112,1};
   
    // printarray(third, 15);
    // cout << endl
    //      << sizeof(third)/sizeof(int);


    //array pass by address

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};

    for (int i = 0; i < 5;i++){
        cout << ch[i];
    }
}