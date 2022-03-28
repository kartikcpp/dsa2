#include<iostream>
using namespace std;


int nosetbits(int n){
    int count=0;

    while (n != 0){
        if(n&1)
            count++;
        n=n >> 1;
    }
    return count;
}
int main(){
    cout << nosetbits(5);

}