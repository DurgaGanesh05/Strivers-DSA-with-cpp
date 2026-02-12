#include <iostream>
using namespace std;

int main() {
    int n=1234;
    cin >> n;

    int rev = 0;
    int rem=0;

    while(n>0){
        rem = n%10;
        rev = rev * 10 + rem;
        n/=10;
    }
    cout<<rev;
    return 0;
}