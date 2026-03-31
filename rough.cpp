#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

int main()
{
    string s = "weallloveyou";
    int k = 7;
    int i = 0;
    int c = 0, cmax = INT16_MIN;
    string a = "";

    for (int j = 0; j < s.length(); j++)
    {
        a += s[j];
        int p=a.length()-1;
        if (a[p] == 'a' || a[p] == 'e' || a[p] == 'i' || a[p] == 'o' || a[p] == 'u')
            c++;

        if (j - i + 1 > k)
        {
            if (a[0] == 'a' || a[0] == 'e' || a[0] == 'i' || a[0] == 'o' || a[0] == 'u')
                c--;
            a.erase(a.begin());
            i++;
        }

        cmax = max(cmax, c);
    }
    cout<< cmax;
}
