#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    vector<int> arr = {2,2,1,1,1,2,2};

    int n=arr.size();
    int n1=n/2;


    unordered_map<int, int> hashMap;

    for(int i=0; i<n; i++){
        hashMap[arr[i]]++;
    }

    for(auto i : hashMap) {

        if(i.second > n1){
            cout<<i.first<<endl;
            break;
        }
    }


    // for(int i=0; i<n; i++){
    //     int c=0;
    //     for(int j=i; j<n; j++){
    //         if(arr[i] == arr[j]) c++;
    //     }
    //     if(c>n1){
    //         cout<<arr[i];
    //         break;
    //     }   
    //     break;
    // }
    return 0;
}