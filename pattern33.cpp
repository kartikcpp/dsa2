#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int space = n - i;
        while(space>0){
            cout << " ";
            space--;

        }
        int j = 1;
        while(j<=i){
            cout << j;
            j++;
        }
        //third
        int k = i - 1;
        while(k>0){
            cout << k;
            k--;
        }

        cout << endl;
        i++;
    }
}
