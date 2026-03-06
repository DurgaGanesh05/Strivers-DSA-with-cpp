#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr = {};
    int k=3;
    int n = arr.size();
    int c=0;

    vector<int> prefixSum(n);

    prefixSum[0]=arr[0];

    for(int i=1; i<n; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }


    unordered_map<int, int> mpp;
    for(int j=0; j<n; j++){
        if(prefixSum[j] == k) c++;

        int val = prefixSum[j] - k;
        if(mpp.find(val) != mpp.end()){
            // len = prefixsum[j] - 
        }

        if(mpp.find(prefixSum[j]) == mpp.end()){
            mpp[prefixSum[j]] = 0;
        }
        mpp[prefixSum[j]]++;
    }
    cout<<c;
   
}





/*

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