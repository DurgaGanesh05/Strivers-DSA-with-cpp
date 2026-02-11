#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    queue<int> st;
    st.push(12);
    st.push(45);
    st.push(56);
    st.push(24);
    st.push(75);
    cout << st.back();
    return 0;
}