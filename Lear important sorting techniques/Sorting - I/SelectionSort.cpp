#include<iostream>
using namespace std;

int main(){
    int n=6;
    int arr[] = {13, 46, 24, 52, 20, 9};

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int min = arr[i];
            if(arr[j] < arr[i]) swap(arr[i], arr[j]);
        }
        // cout<<arr[i]<<" ";
    }

    for(int i : arr) cout << i << " ";





    









    return 0;
}