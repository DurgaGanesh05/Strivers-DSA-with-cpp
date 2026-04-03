#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

// babad

bool isPalindrome(const string& s, int i, int j)
{
    
    while(i<=j){
        if(s[i] != s[j]) return false;

        i++, j--;
    }
    return true;
}

string longestPalindrome(const string& s)
{
    if (s.empty()) return "";
    string ans=s.substr(0, 1);

    for(int i=0; i<s.length(); i++){
        for(int j=i+1; j<s.length(); j++){
            if(isPalindrome(s, i, j) && (j-i+1) > ans.length()) ans=s.substr(i, j-i+1);
        }
    }
    return ans;
}

int main()
{
    string s = "cbbd";
    cout << longestPalindrome(s);
    return 0;
}

/*
Q1)
    string s="abcde";

    unordered_map<char, int> mpp;

    for(int i=0; i<s.length(); i++){
        mpp[s[i]]++;
    }

    for(auto i:mpp)cout<<i.first<<":"<<i.second<<endl;


    Q2)
    string s = "aabc";

    unordered_map<char, int> mpp;

    for (int i = 0; i < s.length(); i++)
    {
        mpp[s[i]]++;
        if(mpp[s[i]] == 1){
            cout<<s[i]<<" "<<i;
            break;
        }
    }

    Q3)
    string s = "abccba";

    unordered_map<char, int> mpp;

    for (int i = 0; i < s.length(); i++)
    {
        mpp[s[i]]++;
        if (mpp[s[i]] >= 2)
        {
            cout << "Index: " << i << ", Char: " << s[i] << "\n";
            break;
        }
    }



    Q4)
    string s = "abcdefghijklmnopqrstuvwxyz";

    unordered_map<char, int> mpp;

    for (int i = 0; i < s.length(); i++)
    {
        mpp[s[i]]++;
    }

    bool flag=true;
    for(auto i:mpp){
        if(i.second >= 2){
            flag=false;
            break;
        }
    }
    cout<<flag;
*/