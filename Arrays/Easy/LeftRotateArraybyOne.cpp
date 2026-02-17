#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {1, 2, 3, 4, 5};
    int n=arr.size();

    arr.push_back(arr[0]);

    for(int i=1; i<=n-1; i++){
        arr[i-1] = arr[i];
    }

    arr[n-1] = arr[n];

    for(int i : arr)cout<<i<<" ";
    return 0;
}