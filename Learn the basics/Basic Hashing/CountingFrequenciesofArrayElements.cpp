#include<iostream>
#include<vector>
#include<map>
using namespace std;


vector<vector<int>> countFrequencies(vector<int>& nums) {
    map<int, int> mpp;
    vector<vector<int>> ans;
    for(int i=0; i<nums.size(); i++){
        mpp[nums[i]]=mpp[nums[i]]+1;
    }

    for(auto i : mpp) ans.push_back({i.first, i.second});

    return ans;
}


int main(){
    int n=5;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];

    countFrequencies(arr);

    return 0;
}
