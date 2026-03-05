#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 2, 3};
    int n = arr.size();
    int ml = INT32_MIN;

    unordered_map<int, int> mpp;

    for (int i : arr)
        mpp[arr[i]]++;

    for (auto i : mpp) cout << i.first << " " << i.second << endl;
}

// int main()
// {
//     vector<int> arr = {1};
//     int k = 0;
//     int n = arr.size();
//     int s = 0;
//     int i = 0, c = 0;

//     for (int j = 0; j < n; j++)
//     {
//         s = s + arr[j];

//         cout<<s<<endl;

//         while (s > k)
//         {
//             s = s - arr[i];
//             i++;
//         }
//         cout<<s<<endl;

//         if (s == k)
//         {
//             c++;
//         }

//         // cout << c << " " << s << endl;
//     }
// }