#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){
    vector<int> arr = {1, 3, 10, 3, 5, 1, 5};
    int n = arr.size();


    int xorr=0;
    for(int i=0; i<n; i++){
        xorr = xorr ^ arr[i];
    }
    cout<<xorr;








    // unordered_map<int, int> mpp;

    // for(int i=0; i<n; i++){
    //     mpp[arr[i]]++;

    // }

    // for(auto i : mpp){
    //     if(i.second == 1) {
    //         cout << i.first << endl;
    //         break;
    //     }
    // }
    // for(auto i : mpp) cout<<i.first<<"->"<<i.second<<endl;
    return 0;
}