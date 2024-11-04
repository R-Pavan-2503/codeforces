#include<iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main()
{
    
    int i = 0;
    vector <int> arr;
    while(i < 4){
        int num;
        cin >> num;
        arr.push_back(num);
        i+=1;
    }

    unordered_set<int> unique_colors(arr.begin(), arr.end());

    int needed = arr.size() - unique_colors.size();
    cout << needed;
    return 0;
}