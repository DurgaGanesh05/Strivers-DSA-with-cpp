#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // cout << "dfgfg";
    vector<int> arr = {1, 2, 2, 3};
    int n = arr.size();
    int x = 2;

    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] <= x)
        {
            low = mid + 1;
        }
        else
        {
            ans = mid;
            high = mid - 1;
        }
    }
    cout << ans;
    return 0;
}