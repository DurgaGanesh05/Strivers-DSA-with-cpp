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
    vector<int> arr = {1};
    int t = 1;

    vector<int> ans;

    int st = 0, end = arr.size() - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
    
        if (arr[mid] == t)
        {
            if (mid+1 < arr.size() && arr[mid + 1] == t)
            {
                ans.push_back(mid + 1);
                ans.push_back(mid);
                break;
            }
            else if (mid-1 >=0 && arr[mid - 1] == t)
            {
                ans.push_back(mid - 1);
                ans.push_back(mid);
                break;
            }
            else{
                ans.push_back(mid);
                ans.push_back(mid);
                break;
            }
        }
        else if (arr[mid] >= t)
            end = mid - 1;
        else
            st = mid + 1;
    }

    if (ans.empty())
    {
        ans.push_back(-1);
        ans.push_back(-1);
    }

    for(int i:ans)cout<<i<<" "; 
}
