#include <iostream>
#include <string>

int main() {
    std::string str_1;
    std::getline(std::cin, str_1);
    std::string res = "";
    
    for (char i : str_1) {
        if (i != 'a' && i != 'e' && i != 'i' && i != 'o' && i != 'u' &&
            i != 'A' && i != 'E' && i != 'I' && i != 'O' && i != 'U') {
            res += '.';
            res += tolower(i);
        }
    }
    
    std::cout << res << std::endl;
    return 0;
}

