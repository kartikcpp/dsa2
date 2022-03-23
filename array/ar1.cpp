#include <iostream>
using namespace std;
int main(){
    int Z[5];
    int C[10] = {23, 232, 23};
    int E[] = {23,23,23,32,4,24,2};


    int A[5]={1,23,4,5,3};
    cout << A[0];
    for (int i = 0; i < sizeof(A)/4;i++){
        cout << &A[i]<<endl;
    }

        return 0;
}