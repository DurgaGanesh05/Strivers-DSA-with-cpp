#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

bool isPalindrome(string s, int i, int j)
{
    // int i=0, j=s.length()-1;

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        else
        {
            i++, j--;
        }
    }
    return true;
}

int main()
{
    string s = "aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga";

    int i = 0, j = s.length() - 1;

    bool flag=true;
    while (i < j)
    {
        
    }

    cout<<flag;

    return 0;
}   

/*

*/
