#include<iostream>
using namespace std;
//Array in compiler
struct Array{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    cout << endl
         << "elements are:  ";
    for (i = 0; i < arr.length;i++){
        cout << arr.A[i];
    }
}
int main(){
    int n, i;
    struct Array arr;
    cout << "enter size of array";
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    cout << endl
         << "enter number of numbers";
    cin >> n;
    cout << endl
         << "enter elements";
    for (i = 0; i < n;i++){

        cin >> arr.A[i];
    }
    arr.length = n;

    Display(arr);
}