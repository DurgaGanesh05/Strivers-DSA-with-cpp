#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 1, 2, 2, 1};

    int lo=0, hi=arr.size()-1, mid=0;

    while(mid<=hi){
        if(arr[mid] == 0){
            swap(arr[lo], arr[mid]);
            lo++, mid++;
        }

        else if(arr[mid] == 1) mid++;

        else{
            swap(arr[hi], arr[mid]);
            hi--;
        }
    }

    for(int i : arr) cout<<i<<" ";
}