#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {0, 1, 2, 4, 5, 6};
    int n = arr.size();
    
    bool flag;
    for(int i=0; i<=n; i++){
        flag=false;
        for(int j=0; j<n; j++){
            if(arr[j] == i) flag=true;
        }
        if(!flag){
            cout<<i;
            break;
        }
    }
    

    return 0;
}