#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int solve()
{
    int n, m;
    cin >> n >> m;
    // int a[n][m];
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int c = 0, c2 = 0;
    int xor_value = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // cout<<a[i][j]<<" ";
            xor_value ^= a[i][j]-'0';
        }
        if (xor_value != 0)
        {
            c++;
        }
        xor_value = 0;
    }
    xor_value = 0;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            // cout<<a[i][j]<<" ";
            xor_value ^= a[i][j]-'0';
        }
        if (xor_value != 0){
        // {   cout<<xor_value<<endl;
            c2++;
        }
        xor_value = 0;
    }
    // cout << c << " " << c2 << endl;
    cout<<max(c,c2)<<endl;
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