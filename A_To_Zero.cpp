#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int solve()
{
    int n, k;
    cin >> n >> k;
    int val1=0, val2;
    int temp = n;
    if (n&1)
    {
        /* code */
        val1 = 1;
        n = n-k;
    }
    k--;
    val1+=(n+k-1)/k;
    
    
    
    cout << val1 << endl;

    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        /* code */
        t--;
        solve();
    }
}