#include<iostream>
using namespace std;

int fib(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    int num1 = 0;
    int num2 = 1;
    int next = 0;
    cout << num1 << endl
         << num2<<endl;
    for (int i = 3; i <= n;i++){
        next = num1 + num2;
        cout << next<<endl;
        num1 = num2;
        num2 = next;

    }
    return next;
}
int main(){
   cout<<"----------"<<endl<< fib(5)<<"--------";
}