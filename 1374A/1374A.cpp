#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int  x , y , n;
        cin >> x >> y >> n;
        int k = n - (n%x) + y;
        if (k > n) k-=x;
        a[i] = k;
    }
    for(auto i : a) cout<<i<<endl;
    
    return 0;
}