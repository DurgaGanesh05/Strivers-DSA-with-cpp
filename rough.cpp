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
    string s = "cbaebabacd", p = "abc";

    vector<int> ph(26, 0);
    vector<int> sh(26, 0);

    vector<int> ans;

    for (int i = 0; i < p.length(); i++)
    {
        ph[p[i] - 'a']++;
    }
    int i=0;
    for (int j = 0; j < s.length(); j++)
    {
        sh[s[j] - 'a']++;

        if ((j - i + 1) > p.length())
        {
            sh[s[i]-'a']--;
            i++;
        }

        if ((j - i + 1) == p.length() && ph == sh)
            ans.push_back(i);
    }
    for(int i:ans)cout<<i<<" ";

    // sh.push_back();
    // sh[0]=1;
    // sh[2]=1;
    // sh[3]=3;
    // sh[4]=1;
    // sh[5]=4;
    // for(int i:sh)cout<<i<<" ";
}