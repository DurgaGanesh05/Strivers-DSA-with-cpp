#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> arr, int n){
    for(int i=n-1; i>=0; i--) cout<<arr[i]<<" ";
}


int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }


    reverse(arr, arr.size());
    return 0;
}