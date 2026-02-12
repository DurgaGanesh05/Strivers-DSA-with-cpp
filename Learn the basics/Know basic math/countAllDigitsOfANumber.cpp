#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int rem=0, c=0;
    while(n>0){
        rem = n%10;
        c++;
        n/=10;
    }
    cout<<c;
}