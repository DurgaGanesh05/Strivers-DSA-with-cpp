#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> arr = {10, 5, 2, 7, 1, -10};
    int n = arr.size();
    int p = 15;

    // int n = arr.size();

    int sum = 0;
    int diff = 0;
    int maxDiff = 0;

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == p)
            {
                diff = j - i + 1;
            }
            // cout<<diff;
            maxDiff = max(diff, maxDiff);
        }
        // cout << endl;
    }
    cout<< maxDiff;

    return 0;
}