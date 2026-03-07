#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    int n = arr.size();
    vector<int> ans;

    ans.push_back(arr[n - 1]);

    int maxi = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > maxi){
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }

    reverse(ans.begin(), ans.end());
    for(int i:ans)cout<<i<<" ";
}

/*
if for example this is the array
arr={4,5,0,-2,-3,1};

then the prefixSum(n) will be = {4, 9, 9, 7, 4, 5};

so we store each prefix sum element into the hashmap the key will be the prefixsum and the value depends upon the question give am i right?



ok what i understood is 2 reasons
1. if we need to check for previous prefix sum it takes more time complexity n^2 in vector as of in hashmap it takes n
2. if the range is very big vector cant handle it but hashmap can




for (int j = 0; j < n; j++)
    {
        if (prefixSum[j] == k)
            c++;
        (this condition is used for the edge case if ps[j] is directly == k)



        int val = prefixSum[j] - k;
        if (mpp.find(val) != mpp.end())
        {
            c += mpp[val];
        }

        if (mpp.find(prefixSum[j]) == mpp.end())
        {
            mpp[prefixSum[j]] = 0;
        }
        mpp[prefixSum[j]]++;
    }






it is because i to j is a subarray so if we do ps[j] - ps[i] we get a target like:
ps[j]-ps[i]=target

now:
ps[i]=ps[j]-target

prefix[j] − target) exists. If it does, then the subarray from i+1 to j
- i am saying this is YES because of ps[j]-target is derived from this formula ps[j]-ps[i]=target am i right?



arr={4,5,0,-2,-3,1};
then the prefix(n) will be = {4, 9, 9, 7, 4, 5};
target = 5;

then:
prefix[j] − prefix[i] = target
- this is the actual formula of prefix sum right?


Now
Rearrange:
prefix[i] = prefix[j] − target

So while scanning index j we ask:
Did we previously see prefix = prefix[j] − target ?

- because we traverse through the array using j and check in each element (prefix[j]) and check if prefix[j]-target is appearing anywhere previously in the map if it appears then from i+1 to j is a subarray exists am i right?


















i thought like if

Input: arr[] = [10, 5, 2, 7, 1, -10], k = 15
Output: 6
Explanation: Subarrays with sum = 15 are [5, 2, 7, 1], [10, 5] and [10, 5, 2, 7, 1, -10]. The length of the longest subarray with a sum of 15 is 6.

this is the question then we use prefix sum for seeing the subarray which has sum = k but how hashmap can be used here my though was like

i
10, 15, 17, 24, 25, 15
j

{like this 2 pointer and when we get prefix[j]=k then i = j and again j will be traversed until j>=k and j<n and keeps updating maxlen=max(maxlen, i-j+1)}

if you think we should use hashmap here explain me how can we use it in a very easy way by traversing the array and showing the map but not giving the code solution if i need it i will ask. just explain my why should we use it here and how

*/

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