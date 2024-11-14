#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;  
    cin >> n;

    vector<vector<int>> final_res;  

    for (int i = 0; i < n; ++i) {
        int val;  
        cin >> val;

        vector<int> res_val;  

        for (int j = 0; j < val; ++j) {
            string input_str;
            cin >> input_str;  

            int index = input_str.find('#');  
            if (index != string::npos) {
                res_val.insert(res_val.begin(), index + 1);
            } 
        }

        final_res.push_back(res_val);  
    }

    for (const auto& res : final_res) {
        for (int index : res) {
            cout << index << " ";  
        }
        cout << endl;  
    }

    return 0;
}
