#include<iostream>
using  namespace std;

struct Array{
    int A[20];
    int length;
    int size;
};

void display(Array arr){
    for (int i = 0; i < arr.length;i++){
        cout << arr.A[i] << " ";
    }
    cout << endl;
}
void append(Array &arr,int elem){

    arr.A[arr.length] = elem;
    arr.length++;

}
void insert(Array &arr,int index,int x){
    int i;
    for (i = arr.length; i > index;i--){
        arr.A[i] = arr.A[i - 1];

    }
    arr.A[i] = x;
}

 int main(){
     struct Array arr;
     
        arr={
            {1,2,3,4,5,6,7,8,9,10},
            10,
            20
        };
        display(arr);
        append(arr, 200);
        display(arr);
        insert(arr, 3, 121);
        display(arr);
        

        return 0;
 }