#include<iostream>
using namespace std;

int main(){

    int n=5;
    int arr[] = {5, 4, 4, 1, 1};

    for(int i=n-1; i>=1; i--){
        for(int j=0; j<i; j++){
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }

    for(int i : arr) cout << i << " ";

    return 0;
}