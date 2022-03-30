#include<iostream>
using namespace std;
bool search(int key,int arr[],int n){
    for (int i = 0; i < n;i++){
        if(key==arr[i])
            return true;

    }
    return false;
}
int main(){
    int arr[] = {2, 3, 44231, -23, 111, 23, 1134, 90, 34};
    int sizeofarr = sizeof(arr) / sizeof(int);

    int key;
    cin >> key;
    bool found = search(key,arr, sizeofarr);
    cout<<(found == 1);
    cout << found;
}