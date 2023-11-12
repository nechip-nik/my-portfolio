#include <iostream>

int main(){
    int x;
    std::cin >> x;
    if(x % 400 == 0){std::cout << "YES\n";}
    else if(x % 100 == 0){std::cout << "NO\n";}
    else if(x % 4 == 0){std::cout << "YES\n";}
    else {std::cout << "NO\n";}
    return 0;
}