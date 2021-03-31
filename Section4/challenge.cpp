#include <iostream>

int main( ) {
    int n;
    std::cout << "Enter you favourite number between 1 and 100: ";
    std::cin >> n;
    std::cout << "Amazing!! That's my favourite number too"<< std::endl;
    std::cout << "No really!! " << n << " is my favourite number!" << std::endl;
    return 0;
}