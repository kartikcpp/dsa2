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
    if(index>=0 && index<=arr.length){

    int i;
    for (i = arr.length; i > index;i--){
        arr.A[i] = arr.A[i - 1];

    }
    arr.A[i] = x;
}
}

int Delete(Array &arr,int index){
    int x = arr.A[index];
    for (int i = index; i < arr.length - 1;i++){
        arr.A[i] = arr.A[i + 1];
    }
    arr.length--;
    return x;
}

//transposition 
//move to front
void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int linearsearch(Array & arr,int key){

    int i;
    for (i = 0; i < arr.length;i++){
        if(key==arr.A[i]){
            swap(&arr.A[i], &arr.A[i - 1]);
            return i-1;
        }
    }
    return -1;

}
int binarysearch(struct Array arr,int key){
    int l, h, mid;
    l = 0;
    h = arr.length - 1;
    while(l<=h){
        mid = l + h / 2;
        if(arr.A[mid]==key){
            return mid;

        }
        else if(arr.A[mid]>key){
            h = mid - 1;
        }
        else {
            l = mid + 1;
        }

    }
    return -1;
}

int RBinarySearch(int A[],int l,int h,int key){
  
    if(l<=h){ 
         int mid = (l + h) / 2;

        if(A[mid]==key){
            return mid;
        }
        else if(A[mid]>key){
          return  RBinarySearch(A, l, mid - 1, key);
        }
        else{
         return   RBinarySearch(A, mid + 1, h, key);
        }


    }
    
        return -1;
    
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
        cout << "------------------------" << endl;
        cout << Delete(arr, 3)<<endl;
        display(arr);
        cout << endl;
        cout << linearsearch(arr, 4)<<endl;
        display(arr);

        return 0;
 }