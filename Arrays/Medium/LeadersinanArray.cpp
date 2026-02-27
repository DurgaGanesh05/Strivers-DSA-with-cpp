#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {-3, 4, 5, 1, -4, -5};
    int n=arr.size();

    int i=0, j=n-1;
    while(i<=j){
        if(arr[i] <= arr[j])i++;
        else j--;
        if(i+1 == j){
            j=n-1;
            cout<<arr[i]<<" ";
            i++;
        }
    }

    cout<<arr[n-1];


// if(arr[i] <= arr[j])i++;
//             else {
//                 j=n-1;
//                 cout<<arr[i]<<" ";
//                 i++;
//             }

    // bool flag;

    // for(int i=0; i<n; i++){
    //     flag=true;
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i] <= arr[j]) {
    //             flag=false;
    //             break;
    //         }
    //     }
    //     if(flag) cout<<arr[i]<<" ";
    // }
}