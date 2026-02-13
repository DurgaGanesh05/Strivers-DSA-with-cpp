#include <iostream>
using namespace std;

void print(int n){
    if(n==0) return;
    cout<<"Ashish"<<" ";
    n--;
    print(n);
}

int main() {
    // Your code here
    
    int n=10;

    print(n);


    return 0;
}