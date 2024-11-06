#include <iostream>
#include <vector>
#include <cmath> // For abs() function
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> res;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;

        int diff = abs(a - b);
        if (diff % 10 == 0) {
            res.push_back(diff / 10);
        } else {
            res.push_back(diff / 10 + 1);
        }
    }

    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << endl;
    }

    return 0;
}
