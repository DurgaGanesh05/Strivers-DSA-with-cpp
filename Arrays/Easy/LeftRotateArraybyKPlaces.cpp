#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    int k=2;

    vector<int> temp = {0};
    for(int i=0; i<k; i++){
        temp[i] = arr[i];
    }

    for(int i=k; i<n; i++){
        arr[i-k] = arr[i];
    }
    
    int j=0;
    for(int i=n-k; i<n; i++){
        arr[i]=temp[i-(n-k)];
        j++;
    }

    for(int i : arr)cout<<i<<" ";

    return 0;
}