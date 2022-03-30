#include<iostream>
#include<vector>
using namespace std;


void countfreq(int arr[],int n){
    vector<bool> visited(n,false);
    
    for (int i = 0; i < n;i++){
        int count = 1;
        if(visited[i]==true)
            continue;
        for (int j = i + 1; j < n;j++){
            if(arr[i]==arr[j]){
            visited[j] = true;
            count++;
          
            }
        }

        cout << arr[i] << "--->" << count<<endl;
    }
}
int main(){

    int arr[] = {1, 2, 11, 2, 1, 1, 7, 8, 9, 7, 3, 3, 3, 3, 4};

    countfreq(arr, 15);
    return 0;
}