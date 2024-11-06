#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> liked_num;
    int num = 1;
    while (num < 1000)
    {
        if (num % 3 != 0 and num % 10 != 3)
        {

            liked_num.push_back(num);
            num += 1;
        }
    }
    
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(liked_num[k - 1]);
    }

    return 0;
}