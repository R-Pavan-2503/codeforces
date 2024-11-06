#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> results;
    for (int i = 0; i < t; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        int arr[3] = {a, b, c};
        sort(arr, arr + 3);
        results.push_back(arr[1]); 
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
