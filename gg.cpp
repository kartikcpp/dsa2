#include<iostream>
using namespace std;
int main(){

    int n = 5;

    int i = 1;
    while(i<=5){

        int j = 1;
        while(j<=5){
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}