#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    vector<int> arr = {1,0,1,1,0,1};

    int maxi=0, cnt=0;

    for(int i=0; i<arr.size(); i++){
        if(arr[i] == 1)cnt++;
        maxi=max(cnt, maxi);
        if(arr[i] == 0){
            cnt=0;
        }
    }
    // maxi=max(cnt, maxi);
    cout<<maxi;
    return 0;
}