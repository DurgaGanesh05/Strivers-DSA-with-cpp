#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int n;
    // cin >> n;
    
    vector<int> arr;
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    int max1 = INT16_MIN;
    int max2 = INT16_MIN;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max1) max2=arr[i];
    }

    if(max2<0) max2=-1;
    
    cout<<max2;

    return 0;
}