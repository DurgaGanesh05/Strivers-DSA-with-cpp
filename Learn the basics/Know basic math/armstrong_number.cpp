#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 12;
    cin >> n;

    int no=0, rem=0, temp=n, temp1=n;
    int arm=0;

    while(n>0){
        rem = n%10;
        no++;
        n/=10;
    }

    rem=0;
    while(temp>0){
        rem = temp%10;
        arm += pow(rem, no);
        temp /= 10;        
    }

    if(temp1 == arm) cout << "Armstrong Number";
    else cout << " Not Armstrong Number";
    return 0;
}