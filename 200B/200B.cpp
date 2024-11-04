#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> p[i];
    }

    double sum = std::accumulate(p.begin(), p.end(), 0);
    double average_percentage = sum / n;

    std::cout << std::fixed << std::setprecision(12) << average_percentage << std::endl;

    return 0;
}
