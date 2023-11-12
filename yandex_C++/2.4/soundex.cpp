#include <iostream>
#include <string>

std::string Soundex(const std::string& word) {

    std::string res;

    res.push_back(word[0]);

    for (size_t i = 1; i != word.size(); ++i) {

        switch (word[i]) {
            case 'b':
            case 'f':
            case 'p':
            case 'v':
                if (res.back() != '1') {
                    res.push_back('1');
                }
                break;

            case 'c':
            case 'g':
            case 'j':
            case 'k':
            case 'q':
            case 's':
            case 'x':
            case 'z':
                if (res.back() != '2') {
                    res.push_back('2');
                }
                break;

            case 'd':
            case 't':
                if (res.back() != '3') {
                    res.push_back('3');
                }
                break;

            case 'l':
                if (res.back() != '4') {
                    res.push_back('4');
                }
                break;

            case 'm':
            case 'n':
                if (res.back() != '5') {
                    res.push_back('5');
                }
                break;

            case 'r':
                if (res.back() != '6') {
                    res.push_back('6');
                }
                break;
        }
    }
    while (res.size() < 4) {
        res.push_back('0');
    }
    res.resize(4);
    return res;
}
int main() {
    std::string word;
    std::cin >> word;
    std::cout << Soundex(word) << "\n";
}