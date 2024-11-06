#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++)
    {
        int a , b , c;
        cin >> a >> b >> c;
        if (a < b and b < c) v[i] = "STAIR";
        else if ( a < b and b > c ) v[i] = "PEAK";
        else v[i] = "NONE";
    }
    for(auto& i : v){
        cout << i << endl;
    }
    return 0;
}