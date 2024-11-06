#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    vector<int> numbers;
    
    for (int i = 0; i < s.size(); i += 2) {
        numbers.push_back(s[i] - '0'); 
    }
    
    sort(numbers.begin(), numbers.end());
    
    for (int i = 0; i < numbers.size(); ++i) {
        if (i > 0) cout << "+";
        cout << numbers[i];
    }
    cout << endl;

    return 0;
}
