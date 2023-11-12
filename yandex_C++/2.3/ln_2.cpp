#include <iostream>
 
int main() {
    int n;
    std::cin >> n;
 
    double sign = 1;
    double result = 0.0;
 
    for (int i = 1; i <= n; ++i) {
        result += sign / i;
        sign = -sign;
    }
    std::cout << result << "\n";
}