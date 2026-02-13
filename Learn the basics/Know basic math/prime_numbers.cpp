#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int div=0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            div++;
        }
    }

    if(div>2) cout << "not prime";
    else cout << "prime";
    return 0;
}