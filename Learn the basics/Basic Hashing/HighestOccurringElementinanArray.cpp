#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){
    int n=6;
    int arr[] = {2, 4, 100, 2, 5, 4};

    map<int, int>mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    int max=INT32_MIN;
    for(auto i :mpp){
        cout << i.first << "->" << i.second << endl;
    }
    cout<<max;
}