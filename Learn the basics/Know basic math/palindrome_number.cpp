#include <iostream>
using namespace std;



int main() {
    int n;
    cin >> n;

    int temp=n;
    int rem=0, rev=0;
    while(n>0){
        rem = n%10;
        rev = rev*10+rem;
        n/=10;
    }

    if(temp == rev) cout << "True";
    else cout << "False";
    
    return 0;
}