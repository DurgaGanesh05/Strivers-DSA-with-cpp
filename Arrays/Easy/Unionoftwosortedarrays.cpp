#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 2, 7};

    set<int> s;

    for(int i : arr1) s.insert(i);
    for(int i : arr2) s.insert(i);

    for(auto i : s)cout << i << " ";

    return 0;
}