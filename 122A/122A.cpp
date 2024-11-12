#include <iostream>
using namespace std;

bool isLuckyNumber(int n) {
    string num = to_string(n);

    for (char c : num) {
        if (c != '4' && c != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    if (isLuckyNumber(n)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
