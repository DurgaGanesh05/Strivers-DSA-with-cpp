#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {2, 3, 4, 5, 3};
    int n =arr.size();
    int target=3;

    for(int i=0; i<n; i++){
        if(arr[i] == target) {
            cout<<i;
            break;
        }
    }


    return 0;
}