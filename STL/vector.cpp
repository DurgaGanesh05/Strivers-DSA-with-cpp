#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> v1(v);

    vector<int> ::iterator it = v.begin();
    cout << *(it) << " ";
    it++;

    return 0;
}