#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr = {3,1,-2,-5,2,-4};

    vector<int> pos;
    vector<int> neg;

    for(int i=0; i<arr.size(); i++){
        if(arr[i] > 0)pos.push_back(arr[i]);
        if(arr[i] < 0)neg.push_back(arr[i]);
    }

    int i=0, j=0;   //i=even(pos)  j=odd(neg)

    for(int k=0; k<arr.size(); k++){
        if(k%2==0){
            arr[k] = pos[i];
            // cout<<arr[k]<<" ";
            i++;
        }
        else{
            arr[k] = neg[j];
            // cout<<arr[k]<<" ";
            j++;
        }
        // cout<<arr[k]<<" ";
    }

    for(int i:arr)cout<<i<<" ";

    return 0;
}