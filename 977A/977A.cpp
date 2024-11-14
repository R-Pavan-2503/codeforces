#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a , b;
    cin >> a >> b;
    for(int i = 0; i < b; i++)
    {
        if ( a % 10 == 0) a = a / 10;
        else a = a - 1;
    }
    cout << a ;
    return 0;
}
