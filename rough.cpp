#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

int main()
{
    string a = "99", b="99";
    int p = stoi(a);
    int q = stoi(b);

    int s1=0, s2=0, rem1=0, rem2=0;
    while(p>0 && q>0){
        rem1=p%10;
        rem2=q%10;
        
        s1+=rem1;
        s2+=rem2;

        p/=10;
        q/=10;
    }

    string x=to_string(s1);
    string y=to_string(s2);

    cout<<x+y;
}
