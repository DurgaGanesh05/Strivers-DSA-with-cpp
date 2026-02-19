#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {0, 1, 4, 0, 5, 2};
    
    int n=arr.size();

    int j=-1;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            j=i;
            break;
        }
    }

    for(int i=j+1; i<n; i++){
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    
    for(int i : arr)cout<<i<<" ";
    return 0;
}