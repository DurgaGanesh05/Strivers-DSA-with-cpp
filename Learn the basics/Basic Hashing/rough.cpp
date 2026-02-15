#include<iostream>
#include<map>
#include<map>
using namespace std;

int main(){

    // int n = 5;
    // int arr[5]={1, 3, 2, 1, 3};

    // int q=5;

    // int hash[13]={0};
    // for(int i=0; i<n; i++){
    //     hash[arr[i]]++;
    // }

    // while(q--){
    //     int a;
    //     cin>>a;

    //     cout<<hash[a]<<endl;
    // }




    // string s="abcdabehf";

    // int hash[256] = {0};

    // for(int i=0; i<s.length(); i++){
    //     hash[s[i]]++;
    // }

    // int q=5;
    // char c;
    // while(q--){
    //     cin>>c;

    //     cout<<hash[c]<<endl;
    // }





    //hashing using maps
    int n=7;
    int arr[] = {1, 2, 3, 1, 3, 2, 12};


    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    //just for iterating normally
    for(auto i : mpp) cout << i.first << "->" << i.second << endl;

    // int q=5;
    // while(q--){
    //     int a;
    //     cin>>a;

    //     // cout << mpp[a] << endl;
    // }



    return 0;
}