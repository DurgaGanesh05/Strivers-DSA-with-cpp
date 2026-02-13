#include <iostream>
using namespace std;

void print(int i, int n){
    if(n<i) return;
    cout << n << endl;
    n--;
    print(i, n);
}

int main() {
    int n = 10;
    // cout<<"A";
    print(1, n);

    return 0;
}