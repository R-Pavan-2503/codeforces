#include<iostream>
#include <string>
using namespace std;
int main()
{
    int n , x =0;
    cin>>n;
    for( int i=0; i<n  ; i++ ){
        string str;
        cin >> str;
        if( str.find("+") != string::npos){
            x+=1;
        }
        else{
            x-=1;
        }
    }
    cout << x << endl;
    return 0;
}