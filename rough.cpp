#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <set>
#include <string>
using namespace std;


int isPalindrome(string s, int i, int j){
    // int i=0, j=s.length()-1;

    while(i<=j){
        if(s[i] != s[j]) {
            return false;
        }else {
            i++, j--;
        }
    }
    return true;
}



int main()
{
    string s = "aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga";

    int i = 0, j = s.size() - 1;

    bool flag = false;
    while (i < j)
    {
        int p = 1;
        if (s[i] == s[j])
        {
            flag = true;
            i++;
            j--;
        }
        else if(s[i] != s[j])
        {
            isPalindrome(s, 0, i);
            isPalindrome(s, j, s.length()-1);
        }
    }
    cout << s;

    return 0;
}

/*

*/
