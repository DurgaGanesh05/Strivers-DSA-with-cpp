#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int>& arr) {
        // code here
        if(arr.size() == 1) return true;
        for(int i=0; i<arr.size()-1; i++){
            if(arr[i] > arr[i+1]){
                return false;
                break;
            }
        }
        return true;
    }


int main(){
    int n;
    cin >> n;

    vector<int> arr;
    for(int i : arr) cin>>i;

    cout << isSorted(arr);

    return 0;
}