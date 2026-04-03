#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <set>
#include <string>
using namespace std;



int main(){
    string s = "anagram", t = "nagaram";

    map<char, int> a;
    map<char, int> b;

    for(int i=0; i<s.length(); i++){
        a[s[i]]++;
    }
    for(int i=0; i<t.length(); i++){
        b[t[i]]++;
    }

    

    bool flag;
    if(s.length() == t.length()){
        for(int i=0; i<s.length(); i++){
            flag = (a==b);
        }
    }

    cout<<flag;
}