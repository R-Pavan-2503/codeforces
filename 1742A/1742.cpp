#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> res;
    for(int i=0;i<n;i++)
    {
        int a , b , c;
        cin>>a>>b>>c;
        if(a+b ==c or a+c==b or b+c==a) res.push_back("yes"); else res.push_back("no");
    }
    for(auto i:res) cout<<i<<endl;

    return 0;
}