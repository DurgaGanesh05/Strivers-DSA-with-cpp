#include<iostream>
using namespace std;

// This sort works by selecting the min of all elements and swapping them with the curr element


int main(){
    int n=5;
    int arr[] = {7, 4, 1, 5, 3};

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int min = arr[i];
            if(arr[j] < arr[i]) swap(arr[i], arr[j]);
        }
    }

    for(int i : arr) cout << i << " ";

    return 0;
}