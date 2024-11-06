#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    vector<string> v(n);
    for(int i=0; i<n; i++){
        int a , b, c;
        cin >>a >>b >>c;
        if (a+b >=10 or b+c>=10 or a+c>=10 or b+a>=10) v[i] = "YES";
        else v[i] = "NO";
    }

    for(auto i : v) cout <<i <<endl;
    return 0;
}