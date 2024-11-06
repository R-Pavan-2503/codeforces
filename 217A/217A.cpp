#include <iostream>
#include <set>
using namespace std;

bool hasDistinctDigits(int year) {
    string yearStr = to_string(year);
    set<char> digitSet(yearStr.begin(), yearStr.end());
    return digitSet.size() == yearStr.size();
}

int main() {
    int y;
    cin >> y;

    int year = y + 1;

    while (!hasDistinctDigits(year)) {
        year++;
    }

    cout << year << endl;

    return 0;
}
