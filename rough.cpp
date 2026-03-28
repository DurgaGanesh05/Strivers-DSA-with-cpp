#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

int main()
{
    string s = "bbbbb";
    unordered_map<char, int> mpp;

    int c = 0, i = 0;
    for (int j = 0; j < s.length(); j++)
    {
        mpp[s[j]]++;
        while (mpp[s[j]] >= 2)
        {
            mpp[s[i]]--;
            if (mpp[s[i]] == 0)
                mpp.erase(s[i]);
            i++;
        }
        c = max(c, j - i + 1);
    }

    cout<<c;


    // for(auto i:mpp)cout<<i.first<<"->"<<i.second<<endl;
}

/*

*/
