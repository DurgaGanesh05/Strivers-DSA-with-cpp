#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr = {10, 5, 2, 7, 1, 9};
    int n = arr.size();
    int p = 15;


    int sum=0;
    int diff=0;
    int maxDiff=0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum=0;
            for(int k=i; k<=j; k++){
                sum+=arr[k];
            }
            if(sum == p){
                diff=j-i+1;
            }
            // cout<<diff;
            maxDiff=max(diff, maxDiff);
        }
        cout<<endl;
    }
    cout<<maxDiff;
    return 0;
}