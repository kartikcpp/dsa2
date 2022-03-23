#include <iostream>
using namespace std;
int main(){

 //static vs dynamic

 //size is decided at runtime or compile time

/* int A[5];
 int n;
 cin >> n;
 int b[n];
*/
 int *p;

 p = new int[5];
 delete[] p;
 //accessing
 p[0] = 2;
 //size of array can't be resized

 int DD[10];
 int *Ui;
 Ui = new int[3];
 Ui[0] = 2;
 Ui[1] = 3;
 Ui[2] = 4;
 for (int i = 0; i < 3;i++){
     cout << Ui[i]<<endl;

 }
     return 0;
}