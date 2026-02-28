#include <iostream>
#include <vector>
using namespace std;

int main()
{
    bool flag;
    vector<int> arr = {1, 2, 3, 1};
    int k = 3;
    int n = arr.size();

    int j;

    for (int i = 0; i < n - 1; i++)
    {
        j = i + 1;
        if (arr[i] == arr[j] && abs(i - j) <= k)
        {
            flag = true;
        }
        else
        {
            j++;
        }
    }
    flag = false;
}