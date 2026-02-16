#include<iostream>
#include<vector>
using namespace std;

int qs(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= pivot && i<=high-1) i++;
        while(arr[j] > pivot && j>=low+1) j--;
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);

    return j;
}

void quickSort(vector<int> &arr, int low, int high){
    if(low < high){
        int pIndex = qs(arr, low, high);
        quickSort(arr, low, pIndex-1);
        quickSort(arr, pIndex+1, high);
    }
}


int main(){
    vector<int> arr;
    for(int i : arr) cin>>arr[i];

    quickSort(arr, 0, arr.size()-1);

    for(int i : arr)cout<<i<<" ";
    return 0;
}