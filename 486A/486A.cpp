#include <iostream>
using namespace std;

long long f(long long n) {
    if (n % 2 == 0) {
        return n / 2;
    } else {
        return -(n + 1) / 2;
    }
}

int main() {
    long long n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
