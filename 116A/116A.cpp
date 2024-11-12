#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    int cap = 0 , max_cap = 0;

    for (int i = 0; i < n; i++){
        int a , b;
        cin >> a >> b;
        cap = cap - a + b;
        max_cap = max(max_cap , cap);
    }
    cout << max_cap << endl;
    return 0;
}