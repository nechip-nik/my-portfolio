#include <iostream>
#include <vector>

 int main() {
    int n;
    std::cin >> n;
    std::vector<int> s(n);

    for (int i = 1; i <= n; ++i) {
        int seat;
        std::cin >> seat;
        s[seat - 1] = i;
    }

    for (int guest : s) {
        std::cout << guest << " ";
    }

    std::cout << "\n";
}