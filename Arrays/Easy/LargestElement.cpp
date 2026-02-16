#include<iostream>
using namespace std;

int main(){
    
    int n;
    // cin >> n;
    
    int arr[] = {3, 3, 0, 99, -40};
    // for(int i : arr) cin>>arr[i];
    
    int max = INT16_MIN;
    for(int i : arr) if(i > max) max = i;
    
    cout<<max;

    return 0;
}