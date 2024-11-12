#include <iostream>
#include <algorithm> // for transform
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        // Convert the string to lowercase
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        // Check if the string is "yes"
        if (s == "yes")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
