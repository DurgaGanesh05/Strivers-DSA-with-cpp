#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <set>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    vector<int> arr = {3, 6, 7, 11};
    int h = 8;

    int sum = 0;
    double k = 1;

    while (sum <= k)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            sum += ceil(arr[i] / k);
        }
        // cout << sum;
        if (sum > h)
        {
            sum = 0;
            k++;
        }
    }
    cout<<k;
}
