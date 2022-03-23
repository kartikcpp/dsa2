//2d array

#include <iostream>
using namespace std;
int main(){
    int B[3][4];

    //array of pointers
    int *A[3];
    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];

    //accesing
    A[0][1];

    //double pointer
    int **C;
    C = new int*[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];

    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 4;j++){
            cout << C[i][j];
        }
    }

        return 0;
}
