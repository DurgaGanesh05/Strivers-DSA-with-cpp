#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

void getPerms(string &s, int idx){

    if(idx == s.length()){
        for(int i=0; i<s.length(); i++)cout<<s[i]<<" ";
    }

    cout<<endl;

    for(int i=idx; i<s.length(); i++){
        swap(s[i], s[idx]);
        getPerms(s, idx+1);
        
        swap(s[i], s[idx]);
    }
}

int main()
{
    string s = "eidbaooo";

    getPerms(s, 0);
    
}