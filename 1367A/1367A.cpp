#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> result;
    for(int i=0; i<n; i++){
        string str;
        cin>>str;

        string b;
        b+=str[0];

        for(size_t i=1; i<str.size(); i+=2){
            b+=str[i];
        }
        result.push_back(b);
    }
    for(auto i: result){
        cout<<i<<endl;
    }
    return 0;
}