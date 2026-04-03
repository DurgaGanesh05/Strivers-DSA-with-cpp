#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <set>
#include <string>
using namespace std;



int main(){
    string s="YazaAay";
    string ans="";

    for(int i=0; i<s.length(); i++){
        for(int j=i+1; j<s.length(); j++){
            if((abs(s[i]-s[j]) == 32) || abs(s[i]-s[j]) == 0) {
                string temp=s.substr(i, j-i+1);
                if(temp.length() > ans.length())ans=temp;
            }
        }
    }
    cout<<ans;
}