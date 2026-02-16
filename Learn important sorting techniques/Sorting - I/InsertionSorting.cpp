#include<iostream>
using namespace std;

int main(){

    int n=5;
    int arr[] = {5, 4, 3, 2, 1};

    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }

    for(int i : arr) cout << i << " ";
    return 0;
}