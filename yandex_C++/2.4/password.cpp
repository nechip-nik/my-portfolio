#include <iostream>
#include <string>

int Passwordcheck(const std::string &password) {
    if (password.size() < 8 || password.size() > 14) {
        //std::cout << "incorrect password size\n";
        return 0;

    }
    int upper = 0;
    int lower = 0;
    int digit = 0;
    int other = 0;

    for (char i : password) {
        if (i < 33 || i > 126) {
            return 0;
        }
        if ('A' <= i && i <= 'Z') {
            upper = 1;
        } else if ('a' <= i && i <= 'z') {
            lower = 1;
        } else if ('0' <= i && i <= '9') {
            digit = 1;
        } else {
            other = 1;
        }

    }
    return upper + lower + digit + other >= 3;
}
int main() {
    std::string password;
    std::getline(std::cin, password);
    
    if (Passwordcheck(password)) {  std::cout << "YES\n";} 
    else { std::cout << "NO\n";}
}