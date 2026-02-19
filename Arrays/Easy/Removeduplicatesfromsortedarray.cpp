#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {0, 0, 3, 3, 5, 6};
    int n=arr.size();

    int i=0;
    for(int j=1; j<=arr.size(); j++){
        if(arr[i] != arr[j]){
            arr[i+1]=arr[j];
            i++;
            n--;
        }
    }

    for(int i : arr)cout<<i<<" ";






    
    // int i=0;
    // for(int j=1; j<=arr.size(); j++){
    //     if(arr[j] != arr[i]){
    //         arr[i+1] = arr[j];
    //         i++;
    //     }
    // }

    // for(int i : arr) cout<<i<<" ";

    // set<int> sol;
    // for(int i : arr)sol.insert(i);

    // for(int i : sol)cout<<i<<" ";

    return 0;
}