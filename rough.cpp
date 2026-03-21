#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    vector<int> arr = {2,1,-1};
                    // 0 1 2 3 4 5
    int n = arr.size();

    vector<int> sumLeft(n);
    vector<int> sumRight(n);

    sumLeft[0]=arr[0];
    sumRight[n-1]=arr[n-1];

    for(int i=1; i<n; i++){
        sumLeft[i] = sumLeft[i-1]+arr[i];
    }
    for(int i=n-2; i>=0; i--){
        sumRight[i] = sumRight[i+1]+arr[i];
    }

    for(int i=0; i<n; i++){
        if(sumLeft[i] == sumRight[i]) cout<<i<<" ";
    }
}

/*

If the array is:

[0, 4, 0, 0, 3, 0, 5, 0, 1, 0]
Run your algorithm step by step.
After the first zero moves, what exactly happens to the second zero and the 1?
Try tracing that carefully — that example exposes the weakness in your current logic.

for (i->n) if arr[i] == 0, then store the index in temp and i will break the loop

 if arr[i] != 0 then swap(arr[i], arr[temp]);

if i dolike this it doesnt work but i need one more while inside the loop it is not optimal then how?

*/
